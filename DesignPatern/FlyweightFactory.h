#pragma once

#include <unordered_map>
#include "Flyweight.h"
#include "Minions.h"
#include "Types.h"

using Dictionary = std::unordered_map<std::string, Minions>;


class MinionFactory
{
    
    private:
        Dictionary delivery;
        
        std::string GetKey(const SharedState &ss) const
        {
            return ss._class + "_" + ss.weapons;
        }

    public:

        MinionFactory(std::initializer_list<SharedState> share_states)
        {
            for (const SharedState &ss : share_states)
            {
                this->delivery.insert(std::make_pair<std::string, Minions>(this->GetKey(ss), Minions(&ss)));
            }
        }

        Minions CreateMinion(const SharedState &shared_state)
        {
            std::string key = this->GetKey(shared_state);

            if (this->delivery.find(key) == this->delivery.end())
            {
                this->delivery.insert( std::make_pair(key, Minions(&shared_state)) );
            }

            return this->delivery.at(key);
        }

        Dictionary AllMinionsFlyweight() const
        {
            return delivery;
        }
};



#include <iostream>
#include "FlyweightFactory.h"



void AddCarToPoliceDatabase(
    MinionFactory &ff
    , const std::string &class_
    , const std::string &armas
    , const std::string &name
    , const std::string &life_point
) {
    const Minions &minion = ff.CreateMinion({class_, armas});
    
    minion.Operation({name, life_point});
}



int main(int argc, const char** argv)
{
    MinionFactory* factory = new MinionFactory({
            {"guerreiro", "arco"}
            , {"mago", "varinha"}
        });



    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");
    AddCarToPoliceDatabase(*factory, "guerreiro", "arco", "coisa de nerd", "201");
    AddCarToPoliceDatabase(*factory, "mago", "varinha", "ciencia todo dia", "278");




    for(const auto& [id, minion] : factory->AllMinionsFlyweight()) 
    {
        std::cout << "\t id: " << id << " minion: " << minion << "\n\n\n"; 
    }

    AddCarToPoliceDatabase(*factory, "soldado", "escudo e espada", "gustavo cunha", "278B");

    for(const auto& [id, minion] : factory->AllMinionsFlyweight()) 
    {
        std::cout << "\t id: " << id << " minion: " << minion << "\n\n\n"; 
    }
    
    //delete factory;

    return 0;
}

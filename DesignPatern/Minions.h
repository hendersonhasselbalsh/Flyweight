#pragma once

#include "Flyweight.h"
#include "Types.h"



class Minions : Flyweight {

	private:

	public:
		Minions(const SharedState* shared_state) : Flyweight(shared_state) {} 
		Minions(const Minions &minion) : Flyweight(minion) {} 

		// to sting
		friend std::ostream &operator<<(std::ostream &os, Minions minions) 
		{ return os << (SharedState)*minions.sharedData; }

		// Inherited via Flyweight
		virtual void Operation(const UniqueState& unique_state) const override
		{
			std::cout << "Personagem " << unique_state.name << "\n"
	        << "Eh da classe " << sharedData->_class << ", possui " << sharedData->weapons << "\n"
	        << "Numero " << unique_state.lifePoint << "\n-------------\n\n\n";
		}

};

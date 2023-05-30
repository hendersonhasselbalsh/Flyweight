#pragma once

#include <iostream>
#include <string>
#include "Types.h"
using std::string;


class Flyweight {

    protected:
        SharedState* sharedData;

    public:
        // constutor
        Flyweight(const SharedState* shared_state) : sharedData(new SharedState(*shared_state)) { }
        Flyweight(const Flyweight &other) : sharedData(new SharedState(*other.sharedData)) { }
        
        // destrutor
        ~Flyweight() { delete sharedData; }

        // to string
        friend std::ostream &operator<<(std::ostream &os, const Flyweight &fw) { return os << *fw.sharedData ; }

        // operação
        virtual void Operation(const UniqueState &unique_state) const = 0;
};




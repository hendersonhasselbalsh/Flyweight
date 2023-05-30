#pragma once


#include <iostream>
#include <string>
using std::string;


// dados compartilhados por todos os Minions
struct SharedState {
	string _class; 
    string weapons; 


    // construtor
    SharedState(string _class, string weapons): _class(_class), weapons(weapons) {}

    // to string
    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss) { return os << "classe=" << ss._class << " | armas=" << ss.weapons ; }
};



// dados exclusivos de cada Minion
struct UniqueState {
	string name;
    string lifePoint;


    // construtor
    UniqueState(const string &rua, const string &life): name(rua), lifePoint(life) {}

    // to string
    friend std::ostream &operator<<(std::ostream &os, const UniqueState &ss) { return os << "name=" << ss.name << " | life point=" << ss.lifePoint ; }
};

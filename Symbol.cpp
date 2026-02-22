#include "Symbol.h"

#include <iostream>
#include <string>

class Symbol {
    private:
        std::string name;
        int value;

public:
    Symbol::Symbol() {
        name = "DEFAULT";
        value = 0;
    }

    Symbol::Symbol(std::string giveName, int giveValue) {
        name = giveName;
        value = giveValue;
    }

    // Getters 
    std::string Symbol::getName() const{
        return name;
    }

    int Symbol::getValue() const{
        return value;
    }

    // Setters
    void Symbol::setName(std::string &newName) {
        name = newName;
    }

    void Symbol::setValue(int &newValue) {
        value = newValue;
    }

    void Symbol::setSymbol(std::string &newName, int &newValue) {
        name = newName;
        value = newValue;
    }
};
#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

class Symbol {
    private:
        std::string name;
        int value;

public:
    Symbol::Symbol();

    Symbol::Symbol(std::string giveName, int giveValue);

    // Getters 
    std::string Symbol::getName() const;

    int Symbol::getValue() const;

    // Setters
    void Symbol::setName(std::string &newName);

    void Symbol::setValue(int &newValue);

    void Symbol::setSymbol(std::string &newName, int &newValue);
};

#endif

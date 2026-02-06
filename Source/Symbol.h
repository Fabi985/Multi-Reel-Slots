#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

class Symbol {
    private:
        int symbolID_;
        int *sIDPtr;
        std::string symbolName_;
        std::string *sNPtr;
        int symbolWeight_;
        int *sWePtr;
        int symbolWorth_;
        int *sWoPtr;

    public:
        Symbol();
        Symbol(int symbolID, std::string symbolName, int symbolWeight, int symbolWorth);

        int getSymbolID();
        std::string getSymbolName();
        int getSymbolWeight(); 
        int getSymbolWorth();

        void setSymbolID(int ID);
        void setSymbolName(std::string name);
        void setSymbolWeight(int weight);
        void setSymbolWorth(int worth);
        void setSymbol(Symbol symbol);
};

#endif
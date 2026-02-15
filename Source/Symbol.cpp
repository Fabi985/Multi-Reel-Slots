#include "Symbol.h"

#include <string>

class Symbol {
    private:
        std::string name;
        int value;
    
    public:
        Symbol::Symbol(){
            name = "DEFAULT";
            value = 0;
        }

        Symbol::Symbol(std::string iname, int ivalue){
            name = iname;
            value = ivalue;
        }

        void Symbol::setSymbol(std::string iname, int ivalue){
            name = iname;
            value = ivalue;
        }

        std::string Symbol::getName() const{
            return name;
        }
        
        int Symbol::getValue() const{
            return value;
        }

        bool operator==(const Symbol& other) const {
            return this->name == other.name;
        }
};

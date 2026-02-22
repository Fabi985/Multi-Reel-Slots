#ifndef REEL_H
#define REEL_H

#include "Symbol.h"

#include <string>
#include <vector>
#include <cstdlib>

class Reel {
    private:
        std::vector<Symbol> LReel;

    public:
        Reel::Reel();

        // Void
        void Reel::spinReel(std::vector<Symbol> Litems);
        void Reel::updateReelItem(Symbol &toChange, Symbol newChange);

        // Getters
        Symbol Reel::getReelAtRow(int row);
};

#endif

#include "Symbol.h"

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

class Reel {
    private:
        std::vector<Symbol> LReel;

    public:
        Reel::Reel(){
            LReel = {Symbol(), Symbol(), Symbol()};
        }

        // Void
        void Reel::spinReel(std::vector<Symbol> Litems){
            for (Symbol &reelItem : LReel) {
                int randomNum = rand() % 101;

                if (randomNum > 50) {
                    updateReelItem(reelItem, Litems[0]);
                }
                else if (randomNum < 50) {
                    updateReelItem(reelItem, Litems[1]);
                }
                std::cout << reelItem.getName();
            }
            return;
        }

        void Reel::updateReelItem(Symbol &toChange, Symbol newChange){
            std::string changedName = newChange.getName();
            toChange.setName(changedName);
            
            int changedValue = newChange.getValue();
            toChange.setValue(changedValue);

            return;
        }

        // Getters
        Symbol Reel::getReelAtRow(int row){
            return LReel[row];
        }
};
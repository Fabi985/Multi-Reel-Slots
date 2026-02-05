#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>
#include <string>

// Constructor
ReelBox::ReelBox() {
    reelBoxID_ = 0;
    symbol_ = Symbol();
}

ReelBox::ReelBox(int ID) {
    reelBoxID_ = ID;
}

// Get
int ReelBox::getReelBoxID() {
    return reelBoxID_;
}

Symbol ReelBox::getReelSymbol() {
    return symbol_;
}


// Set
void ReelBox::setReelBoxID(int &ID) {
    reelBoxID_ = ID;
}

// Find out how to do pointer work properly
void ReelBox::setReelBoxSymbol(Symbol * const &symbol) {
    return;
}

void ReelBox::setReelBox(int &ID, Symbol &symbol) {
    reelBoxID_ = ID;
    // gaah
}
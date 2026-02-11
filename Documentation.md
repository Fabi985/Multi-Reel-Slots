# Slot.h
```C++
#ifndef SLOT_H
#define SLOT_H

private:
    int score;
    int tokens;

    Reel r1;
    Reel r2;
    Reel r3;

    List<Reel> reelList;
    List<Symbol> slotSymbolsList;

public:
    Slot();
    Slot(tokens);

    void setTokens(int amount);
    void incrementTokens(int amount);
    void setSymbols(Symbol symbol);
    void spinSlot(list<Reel> reelList, list<Symbol> slotSymbolsList);

    int getScore();
    int getTokens();

#endif
```
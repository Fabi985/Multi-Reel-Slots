# Three-Reel-Slots
 Three reel slots in C++.
 This is mainly going to be used for me to explain my thought process and plan the project somewhat.


# Programs design
![alt txt](/README_images/fuckass.drawio.png)

## Slot:
``` C++
list<Reel> reelList;
```

## Reel:
``` C++
list<ReelBox> reelBoxesList;
list<symbol> symbolsList;
```

## ReelBox:
``` C++
int reelBoxID_;
Symbol symbol_;
```

## Symbol:
``` C++
int symbolID_;
std::string symbolName_;
int symbolWeight_;
int symbolWorth_;
```

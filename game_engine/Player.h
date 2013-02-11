/* 
 * File:   Player.h
 * Author: J. Madden
 *
 * Created on February 8, 2013, 12:16 PM
 */

#ifndef PLAYER_H
#define	PLAYER_H

//TODO:

#include <string>
#include "stats.h"
#include "Inventory.h"
#include "Position.h"

class Player{
    std::string name;
    StatSheet stats;
    Position pos;
    Inventory inv;
public:
    //Constructor
    Player(std::string theName){ name = theName; }
    //Getter functions
    std::string getName(){ return name; }
    StatSheet &getStats(){ return stats; }
    Position &getPosition(){ return pos; }
    Inventory &getInventory(){ return inv; }
    //Inventory related functions
    void pickUpItem(Item toPickUp);
    //Action related functions
    
    
};

#endif	/* PLAYER_H */


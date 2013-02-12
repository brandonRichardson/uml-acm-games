/* 
 * File:   Inventory.h
 * Author: J. Madden
 *
 * Created on February 8, 2013, 6:59 PM
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

#include <vector>
#include <iostream>
#include <string>
#include "Item.h"

//TODO: 

class Inventory{
    unsigned short spaces;
    unsigned short num_items;
    std::vector<Item> item_list;
public:
    //Constructors
    Inventory(){ spaces = 10; num_items = 0; }
    Inventory(int num_spaces){ spaces = num_spaces; }
    //Getter functions
    unsigned short getSpaces(){ return spaces; }
    std::vector<Item> &getItemList(){ return item_list; }
    Item *getItemByName(std::string nameToFind);
    int getWeight();
    //Inv. management functions (adding/removing, etc)
    void addItem(Item toAdd);
    void removeItem(Item *toRemove);
    void moveItemToBag(Item &toMove, Bag &moveInto);
    bool isFull();
    //Misc functions
    void displayInventory();
    
    
};

#endif	/* INVENTORY_H */


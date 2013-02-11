/* 
 * File:   Item.h
 * Author: Owner
 *
 * Created on February 8, 2013, 7:02 PM
 */

#ifndef ITEM_H
#define	ITEM_H

//TODO: 

#include <string>
#include <vector>
#include "stats.h"

typedef enum {HEAD, CHEST, HANDS, LEGS, FEET, WEAPLEFT, WEAPRIGHT} itemslot;

class Item{
protected:
    std::string name;
    unsigned short value;
    unsigned short weight;
public:
    //Constructor
    Item(std::string itemName, unsigned short theValue, unsigned short theWeight);
    //Getter functions
    std::string getName(){ return name; }
    unsigned short getValue(){ return value; }
    unsigned short getWeight(){ return weight; }
    //Misc functions
    void printItem();
};

class EquippableItem : public Item{
    itemslot slot;
    StatBonuses bonuses;
public:
    //Constructor (long one)
    EquippableItem(std::string theName,
            unsigned short theValue,
            unsigned short theWeight,
            itemslot theSlot, 
            unsigned short strBonus,
            unsigned short intlBonus,
            unsigned short wisBonus,
            unsigned short dexBonus,
            unsigned short conBonus,
            unsigned short defBonus,
            unsigned short spdBonus) : Item(theName, theValue, theWeight),
                    bonuses(strBonus, intlBonus, wisBonus, dexBonus,
                            conBonus, defBonus, spdBonus){ slot = theSlot; }
   //Getter functions
   itemslot getSlot(){ return slot; }
   StatBonuses &getBonuses(){ return bonuses; }
   //Misc. functions
   void changeStatBonus(stat toChange, short amount);
};

class Bag : public Item{
    const unsigned short slots;
    unsigned short num_items;
    std::vector<Item> item_list;
public:
    //Constructor
    Bag(std::string theName, unsigned short slots);
    //Getter functions
    unsigned short getSlots(){ return slots; }
    unsigned short getNumItems(){ return num_items; }
    std::vector<Item> getItemList(){ return item_list; }
    //Inv. management functions
    void addItem(Item toAdd);
    Item &removeItem(Item toRemove);
    bool isFull(){ return (num_items == slots) ? true : false; }
    //Misc. functions
};
#endif	/* ITEM_H */


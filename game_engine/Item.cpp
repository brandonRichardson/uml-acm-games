#include <iostream>
#include "Item.h"

////////////////////////////////////////////////////////////////////////////////
//DEFINITIONS FOR CLASS ITEM
Item::Item(std::string itemName, 
        unsigned short theValue, 
        unsigned short theWeight){
    if(itemName.length() > 12){
        itemName.resize(12);
    }
    name = itemName;
    value = theValue;
    weight = theWeight;
}
void Item::printItem(){
    int i, stop;
    stop = 12 - name.length();
    std::cout << name;
    if(name.length() < 12){
        for(i = 0 ; i < stop ; i++){
                std::cout << " ";
        }
    }
    std::cout << "\t" << value << "\t" << weight << std::endl;
}
////////////////////////////////////////////////////////////////////////////////
//DEFINITIONS FOR CLASS EQUIPPABLEITEM
void EquippableItem::changeStatBonus(stat toChange, short amount){
    switch(toChange){
        case STR:
            bonuses.setStr(amount);
            break;
        case INTL:
            bonuses.setIntl(amount);
            break;
        case WIS:
            bonuses.setWis(amount);
            break;
        case DEX:
            bonuses.setDex(amount);
            break;
        case CON:
            bonuses.setCon(amount);
            break;
        case DEF:
            bonuses.setDef(amount);
            break;
        case SPD:
            bonuses.setSpd(amount);
            break;
        default:
            break;
    }
}
////////////////////////////////////////////////////////////////////////////////
//DEFINITIONS FOR CLASS BAG
Bag::Bag(std::string theName, unsigned short num_slots) : Item(theName, 0, 0),
        slots(num_slots){}

void Bag::addItem(Item toAdd){
  if(!isFull()){
    //std::vector<Item>::iterator it;
    //it = item_list.end();
    item_list.insert(item_list.end(), toAdd);
    num_items++;
  }
}

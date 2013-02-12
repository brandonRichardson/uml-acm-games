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
bool Item::isSelf(Item *toCheck){
  return toCheck == this ? true : false;
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
bool Item::operator==(Item toCheck){
  if(this->name == toCheck.getName() &&
     this->value == toCheck.getValue() &&
     this->weight == toCheck.getWeight()){
    return true;
  }
  else{
    return false;
  }
}
bool Item::operator==(Item *toCheck){
  return toCheck == this ? true : false;
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
    item_list.push_back(toAdd);
    num_items++;
  }
  else{
    std::cout << "Bag is full!" << std::endl;
  }
}

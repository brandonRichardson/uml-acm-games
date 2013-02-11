#include <iostream>
#include "stats.h"

StatSheet::StatSheet(){
    str = intl = wis = dex = con = def = spd = 5;
    encumbrance = 25 * str;
}
void StatSheet::displayStatSheet(){
    std::cout << "STR: " << str << std::endl;
    std::cout << "INT: " << intl << std::endl;
    std::cout << "WIS: " << wis << std::endl;
    std::cout << "DEX: " << dex << std::endl;
    std::cout << "CON: " << con << std::endl;
    std::cout << "DEF: " << def << std::endl;
    std::cout << "SPD: " << spd << std::endl;
}
////////////////////////////////////////////////////////////////////////////////
//BEGIN CLASS STATBONUSES FUNCTIONS
StatBonuses::StatBonuses(unsigned short str, 
                unsigned short intl, 
                unsigned short wis, 
                unsigned short dex, 
                unsigned short con, 
                unsigned short def, 
                unsigned short spd) : StatSheet(){
    this->str = str;
    this->intl = intl;
    this->wis = wis;
    this->dex = dex;
    this->con = con;
    this->def = def;
    this->spd = spd;
}
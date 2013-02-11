/* 
 * File:   main.cpp
 * Author: Owner
 *
 * Created on February 7, 2013, 10:59 PM
 */

#include <cstdlib>

#include "Player.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i;
    Player p1("JMAD");
    Item i1("Gold Bar", 125, 5);
    Item i2("Apple", 2, 1);
    Item i3("Broadsword", 75, 15);
    Bag b1("Leather Bag", 4);
    Inventory player_items;
    vector<Item> bag_items;

    cout << p1.getName() << " has " << p1.getStats().getStr() << " str." << endl;
    cout << p1.getName() << " is at position ";
    p1.getPosition().displayPosition();
    p1.pickUpItem(i1);
    p1.pickUpItem(i2);
    p1.pickUpItem(i3);
    p1.pickUpItem(b1);
    player_items = p1.getInventory();
    player_items.moveItemToBag(i1, b1);
    bag_items = b1.getItemList();
    bag_items.at(0).printItem();

    p1.getInventory().displayInventory();
    cout << "You have " << p1.getInventory().getWeight() <<
            " lbs of junk in your inventory!" << endl;
    return 0;
}


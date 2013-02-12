#include "Inventory.h"

int Inventory::getWeight(){
    int i, weight = 0;
    for(i = 0 ; i < item_list.size() ; i++){
        weight += item_list.at(i).getWeight();
    }
    return weight;
}
void Inventory::addItem(Item toAdd){
  if(!isFull()){
    item_list.push_back(toAdd);
    num_items++;
  }
  else{
    std::cout << "Inventory is full!" << std::endl;
  }
}
Item &Inventory::removeItem(Item &toRemove){
  //Do stuff
  return toRemove;
}
void Inventory::moveItemToBag(Item &toMove, Bag &moveInto){
    if(!moveInto.isFull()){
      moveInto.addItem(toMove);
      //Remove Item from original container
      removeItem(toMove);
    }
    else{
      std::cout << "The container is full." << std::endl;
    }
}
bool Inventory::isFull(){
  return (num_items < spaces) ? false : true;
}
void Inventory::displayInventory(){
    int i;
    std::cout << "Name\t\tValue\tWeight" << std::endl;
    std::cout << "=================================";
    std::cout << std::endl;
    for(i = 0 ; i < num_items ; i++){
        item_list.at(i).printItem();
    }
}

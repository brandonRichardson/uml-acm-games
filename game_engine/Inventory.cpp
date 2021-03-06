#include "Inventory.h"

Item *Inventory::getItemByName(std::string nameToFind){
  std::vector<Item>::iterator it;
  int count = 0;
  it = item_list.begin();
  while(((*it).getName() != nameToFind) && count < item_list.size()){
    it++;
    count++;
  }
  if(count == item_list.size()){
    std::cout << "Item not found." << std::endl;
    return NULL;
  }
  return &(*it);
}
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
void Inventory::removeItem(Item *toRemove){
  int count = 0;
  std::vector<Item>::iterator it;
  it = item_list.begin();
  std::cout << "DEBUG: entering while loop" << std::endl;
  while(count < item_list.size()){
    //Check if element of vector pointed at by it
    //is the same as toRemove
    if(&(*it) == toRemove){
      item_list.erase(it);
      num_items--;
      return;
    }
    it++;
    count++;
    std::cout << "DEBUG: looped " << count << " times" << std::endl;
  }
}
void Inventory::moveItemToBag(Item &toMove, Bag &moveInto){
  Item *temp = &toMove;  
  if(!moveInto.isFull()){
      moveInto.addItem(toMove);
      //Remove Item from original container
      removeItem(temp);
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

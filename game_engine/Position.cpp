#include <iostream>
#include "Position.h"

void Position::displayPosition(){
    std::cout << "(" << pos_x << ", " << pos_y << ")" << std::endl;
}
void Position::changePosition(int move_x, int move_y){
    pos_x = move_x;
    pos_y = move_y;
}

/* 
 * File:   Position.h
 * Author: J. Madden
 *
 * Created on February 3, 2013, 11:00 AM
 */

#ifndef POSITION_H
#define	POSITION_H

class Position{
    int pos_x, pos_y;
public:
    Position(){ pos_x = pos_y = 0; }
    Position(int x, int y){ pos_x = x; pos_y = y; }
    int getPosX(){ return pos_x; }
    int getPosY(){ return pos_y; }
    void setPosX(int new_x){ pos_x = new_x; }
    void setPosY(int new_y){ pos_y = new_y; }
    void displayPosition();
    void changePosition(int move_x, int move_y);
};

#endif	/* POSITION_H */


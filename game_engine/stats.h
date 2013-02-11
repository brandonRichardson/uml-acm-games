/* 
 * File:   stats.h
 * Author: J. Madden
 *
 * Created on February 7, 2013, 10:59 PM
 */

#ifndef STATS_H
#define	STATS_H

//TODO: 

typedef enum {STR, INTL, WIS, DEX, CON, DEF, SPD} stat;

class StatSheet{
    unsigned short encumbrance;
protected:
    unsigned short str, intl, wis, dex, con, def, spd;
public:
    //Constructors
    StatSheet();
    //Getter functions
    unsigned short getStr(){ return str; }
    unsigned short getIntl(){ return intl; }
    unsigned short getWis(){ return wis; }
    unsigned short getDex(){ return dex; }
    unsigned short getCon(){ return con; }
    unsigned short getDef(){ return def; }
    unsigned short getSpd(){ return spd; }
    unsigned short getEncumbrance(){ return encumbrance; }
    //Setter functions
    void setStr(unsigned short s){ str = s; }
    void setIntl(unsigned short s){ intl = s; }
    void setWis(unsigned short s){ wis = s; }
    void setDex(unsigned short s){ dex = s; }
    void setCon(unsigned short s){ con = s; }
    void setDef(unsigned short s){ def = s; }
    void setSpd(unsigned short s){ spd = s; }
    //Misc functions
    void displayStatSheet();
    
};

class StatBonuses : public StatSheet{
public:
    StatBonuses(unsigned short str, 
        unsigned short intl, 
        unsigned short wis, 
        unsigned short dex, 
        unsigned short con, 
        unsigned short def, 
        unsigned short spd);
};
#endif	/* STATS_H */


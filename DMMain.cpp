#include "iostream"            
#include "stats.hpp"        
#include "Config.hpp"                     
                               
int main()
{                    
    Creature m[10];
    Config con;

    m[0].defaultCreature(100,100,"human","vinny");
    con.readText("config.txt");
    
    std::cout << m[0].getarmor() << "\n" << m[0].getHealth() << "\n" << m[0].getType() << "\n" << m[0].getName();
    
                               
}                              
#include "iostream"            
#include "stats.hpp"                             
                               
int main()
{                    
    Creature m[10];
    m[0].defaultCreature(100,100,"human","vinny");
    
    std::cout << m[0].getarmor() << "\n" << m[0].getHealth() << "\n" << m[0].getType() << "\n" << m[0].getName();
    
                               
}                              
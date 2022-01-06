#include "iostream"            
#include "stats.hpp"                             
                               
int main()
{                    
    Monsters m[10];
    m[5].setarmor(100);
    for(int i = 0; i <= 10;i++){
        std::cout << m[i].getarmor() << "\n";
    }    
                               
}                              
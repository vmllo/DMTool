#include "iostream"                                                                                                                               
#include "stats.hpp"                                                                                                                              
#include "Config.hpp"                                                                                                                             
                                                                                                                                                  
int main()                                                                                                                                        
{                                                                                                                                                 
    Config con;                                                                                                                                   
    con.readText("config.txt");                                                                                                                       
    const int arraySize2 = stoi(con.array[0]);                                                                                                                                     
    Creature m[arraySize2];         
    int ii = 1;                                                                                                                                                             
   for(int i = 0; i <= arraySize2-1;i++){
       m[i].setName(con.array[ii++]);
       m[i].setType(con.array[ii++]);
       m[i].setLocation(con.array[ii++]);
       m[i].setarmor(stoi(con.array[ii++]));
       m[i].setHealth(stoi(con.array[ii++]));
   }            
                                                                                                                                  

    for(int  i = 0; i <= 5;i++){
        std::cout <<  m[i].getHealth() << "\n";              
    }                                                                                                                   
                                                                                                                                                  
                                                                                                                                                  
}                                                                                                                                                 
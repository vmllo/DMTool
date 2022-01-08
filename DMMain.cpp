#include "iostream"                                                                                                                               
#include "stats.hpp"                                                                                                                              
#include "Config.hpp"                                                                                                                             
                                                                                                                                                  
int main()                                                                                                                                        
{                                                                                                                                                 
    Config con;                                                                                                                                   
    con.readText("config.txt");                                                                                                                       
    const int arraySize2 = stoi(con.array[0]);                                                                                                                                     
    Creature m[arraySize2];                                                                                                                                                                      
                                                                                                                                                  
    m[0].defaultCreature(stoi(con.array[4]),stoi(con.array[3]),con.array[2],con.array[1]);                                                        
    m[1].defaultCreature(stoi(con.array[8]),stoi(con.array[7]),con.array[6],con.array[5]);                                                                                                                                    
                                                                                                                                                  
                                                                                                                                                  
    std::cout << "hi";                                                                                                                                 
                                                                                                                                                  
}                                                                                                                                                 
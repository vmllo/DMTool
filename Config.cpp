#include "stdio.h"                                                
#include <fstream>                                                
#include <iostream>  
#include "Config.hpp"                                             
#include <string>                                                 
                                                                  
                                                                  
void Config::readText(std::string inputName){                             
   std::fstream newfile;                                          
   newfile.open(inputName, std::ios::in);    
                        
   if(newfile.is_open()){                                         
       std::string tp;      
       int i = 0;
       std::string array[5];                                      
       while(getline(newfile,tp)){ 
            array[i] = tp;
            i++;                                                                 
       }                                                          
       newfile.close();                                           
   }                                                              
}                                                                 
#include "stdio.h"                                                
#include <fstream>                                                
#include <iostream>                                               
#include <string>   


void readText(std::string inputName){              
   std::fstream newfile;                                          
   newfile.open(inputName, std::ios::in);                         
   if(newfile.is_open()){                                         
       std::string tp;                                            
       while(getline(newfile,tp)){                                                                         
            vn.push_back(stoi(tp));                               
       }                                                          
       newfile.close();                                           
   }                                                              
}                
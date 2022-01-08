#include "stdio.h"                                                
#include <vector>                                                 
#include <fstream>                                                                                                                                                   
#include <iostream>                                                                                                                                                  
#include <string>                                                                                                                                                    
                                                                                                                                                                     
class Config                                                                                                                                                         
{                                                                                                                                                                    
    public:                                                                                                                                                          
        void readText(std::string txt);                                                                                                                              
        int arr = 0;                                                                                                                                                 
        int header = 1;                                                                                                                                                                                            
        std::string array[10];                                                                                                                                       
        std::string* parseData(std::string array[]);                                                                                                                 
                                                                                                                                                                     
};                                                                                                                                                                   
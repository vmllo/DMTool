#include <string>

class stats
{
public:
    int getHealth()
    {
        return health;
    }

    void setHealth(int health)
    {
        this->health = health;
    }
    int getarmor()
    {
        return armor;
    }

    void setarmor(int armor)
    {
        this->armor = armor;
    }
    void setType(std::string type){
            this->type = type;
    }
    void setName(std::string name){
            this->name = name;
    }
    std::string getName(){
            return name;
    }
    std::string getType(){
            return type;
    }

protected:
    int health;
    int armor;
    std::string type;
    std::string name;
};
class Creature: public stats {                  
    public:    
       
        void defaultCreature(int health, int armor, std::string type, std::string name){
            stats::health = health;
            stats::armor = armor;
            stats::type = type;
            stats::name = name;
         }
    
        
                                                 
};                                               

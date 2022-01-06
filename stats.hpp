

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

protected:
    int health;
    int armor;
};
class Monsters: public stats {                  
    public:                                      
      int gethealth();            
                                                 
};                                               

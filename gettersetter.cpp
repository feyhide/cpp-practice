#include<iostream>
using namespace std;

class hero{
    private:
    int health = 100;
    
    public:
    int getHealth(){
        return health;
    }
    
    int setHealth(int h){
        health = h;
    }

};

int main()
{
    hero fahad;
    cout<< "Fahad's Health: " <<fahad.getHealth() <<endl;
    fahad.setHealth(120);
    cout<< "Fahad's Health: " <<fahad.getHealth() <<endl;
    return 0;
}
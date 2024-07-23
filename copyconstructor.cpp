#include<iostream>
using namespace std;

class hero{
    public:
    int health = 100;
    
    public:
    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health = h;
    }

    hero(int health){
        cout<< "b" <<endl;
        this->health = health;
    }
    hero(hero& temp){
        cout<< "a" <<endl;
        this->health = temp.health;
    }

};

int main()
{
    hero fahad(30);
    hero hamza(fahad);

    cout<< "fahad:" <<fahad.health <<endl;
    cout<< "hamza:" <<hamza.health <<endl;
    return 0;
}
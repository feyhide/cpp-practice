#include<iostream>
using namespace std;

class hero{
    public:
    int health;

    hero(){
        cout<< "constructor called" <<endl;
    }
    hero(int health){
        cout<< "HEALTH address:" <<this <<endl;
        this->health = health;
    }
};

int main()
{
    hero fahad(10);
    cout<< "HEALTH:" <<fahad.health <<endl;
    //this store current obj address 
    cout<< "FAHAD address:" <<&fahad <<endl;
    
    return 0;
}
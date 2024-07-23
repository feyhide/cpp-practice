#include<iostream>
using namespace std;

class hero{
    public:
    int health;

    hero(){
        cout<< "constructor called" <<endl;
    }
};

int main()
{
    hero *fahad = new hero;
    (*fahad).health = 10;
    cout << "fahad's health: " << (*fahad).health << endl;
    fahad->health = 120;
    cout << "fahad's health: " << fahad->health << endl;
    
    return 0;
}
#include<iostream>
#include "classexternal.cpp"
using namespace std;

class hero {
    public:
    int health;
    char lvl;
    void print(){
        cout<< "fahad's level: " << lvl <<endl;
    };

};
//empty is already taken in cpp
class empt2y{

};

int main()
{
    hero fahad;
    villain hamza;
    cout << "size 1: " << sizeof(fahad) << endl;
    cout << "size 2: " << sizeof(empt2y) << endl;
    cout << "size 3: " << sizeof(hamza) << endl;
    
    fahad.health = 100;
    fahad.lvl = 'a';
    cout << "fahad's health: " << fahad.health << endl;
    fahad.print();
    
    return 0;
}
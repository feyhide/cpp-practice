#include<iostream>
#include<cstring>
using namespace std;

class hero{
    private:
    int health;

    public:
    char *name;
    char lvl;

    hero(){
        cout<< "Simple constructor called" <<endl;
        name = new char[100];
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void setHealth(int h){
        health = h;
    }
    
    void setLvl(int l){
        lvl = l;
    }
    
    void print(){
        cout<< "Name: " << this->name <<endl;
        
        cout<< "Health: " << this->health <<endl;
        
        cout<< "Level: " << this->lvl <<endl<<endl;
    }
    
};

int main()
{
    hero hero1;
    hero1.setHealth(12);
    hero1.setLvl('A');
    char name[100] = "Fahad";
    hero1.setName(name);
    hero1.print();

    //use default copy constructor

    hero hero2(hero1);
    hero2.print();

    hero1.name[1]='!';
    hero1.print();
    hero2.print();
    //hero 1 ka name change kiya to hero2 ka bhi hogaya means shallow copy or address copy
    
    return 0;
}
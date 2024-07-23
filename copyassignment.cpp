#include<iostream>
#include<cstring>
using namespace std;

class hero{
    private:
    int health;

    public:
    char *name;
    char lvl;

    hero(int health){
        this->health = health;
    }

    hero(hero& temp){
        char* ch = new char[strlen(temp.name)];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->lvl = temp.lvl;
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
    hero hero1(12);
    hero1.setLvl('A');
    char name[100] = "Fahad";
    hero1.setName(name);

    hero hero2(hero1);

    hero1.name[1]='!';
    hero1.print();
    hero2.print();
    
    //copy assignment
    
	hero1 = hero2;
    hero1.print();
    hero2.print();
    return 0;
}

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
    //destructor
   ~hero(){
        cout<< "destructor called" <<endl;
   } 
};

int main()
{
    //memory deallocate kardega destrcutor
    //statically
    //static allocation call their destructor themselve
    hero a;
    //dynamically
    //not in the case of dynamic allocation
    hero* b = new hero();
    delete b;
    //thats how you delete dynamically allocated 
    return 0;
}
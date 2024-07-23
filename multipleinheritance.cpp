#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"speaking"<<endl;
    }
};

class human{
    public:
    void saying(){
        cout<<"saying"<<endl;
    }
};

class dog: public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class hybrid: public dog, public human{

};
int main()
{
    hybrid d;
    d.speak();
    d.bark();
    d.saying();
    return 0;
}
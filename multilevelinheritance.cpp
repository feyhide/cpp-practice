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

class dog: public animal{

};

class german: public dog{

};
int main()
{
    german d;
    d.speak();
    return 0;
}
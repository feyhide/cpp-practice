#include<iostream>
using namespace std;

class human{
    public:
        void display(){
            cout<<"i am human"<<endl;
        }
};


class male:public human{
    public:
        void say(){
            cout<<"i am male"<<endl;
        }
};

class female:public human{
    public:
        void shot(){
            cout<<"i am female"<<endl;
        }
};

class what:public male,public female{

};


int main()
{
    what w1;
    w1.say();
    w1.shot();
    w1.display();

    return 0;
}
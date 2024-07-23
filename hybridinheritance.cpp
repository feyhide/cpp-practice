#include<iostream>
using namespace std;

class helo{
    public:
    void speaking(){
        cout<<"speaking"<<endl;
    }
};

class a{
    public:
    void fun1(){
        cout<<"f1"<<endl;
    }
};

class b: public a{
    public:
    void fun2(){
        cout<<"f2"<<endl;
    }
};

class c:public a,public helo{ //this is hybrid inheritance 
    public:
    void fun3(){
        cout<<"f3"<<endl;
    }
};

int main()
{
    a ob1;
    b ob2;
    c ob3;
    ob1.fun1();
    
    ob2.fun1();
    ob2.fun2();
    //ob2.fun3();
    
    ob3.fun1();
    //ob2.fun2();
    ob3.fun3();
    ob3.speaking();

    //commented one cant be done as they are out of hierarical order
    return 0;
}
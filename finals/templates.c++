#include<iostream>
using namespace std;


class blip{
    public:
        string name;
};

template<class T>
class product{
    public:
        void objreturnkaren(T obj){
            cout<<obj.name<<endl;
        }
        void returnkaren(T obj){
            cout<<obj<<endl;
        }
};

int main()
{

    product <string>p1;

    
    p1.returnkaren("hello");
    
    blip b1;
    b1.name = "fahad";
    
    product <blip>p2;

    
    p2.objreturnkaren(b1);
    
    

    return 0;
}
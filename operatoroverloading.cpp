#include<iostream>
using namespace std;

class obj{
    public:
    int a,b;
    void operator+ (obj &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout<<v2-v1<<endl;
    }
    void operator() (){
        cout<<"bracket "<< this->a <<endl;
    }
};

int main()
{
    obj obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj2+obj1;
    obj1();
    return 0;
}
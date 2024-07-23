#include<iostream>
using namespace std;

class a{
    public:
    void func(){
        cout<<"A here"<<endl;
    }
};
class b{
    public:
    void func(){
        cout<<"B here"<<endl;
    }
};
class c : public a, public b{
};

int main()
{
    c obj;
    obj.a::func();
    obj.b::func();
    
    return 0;
}
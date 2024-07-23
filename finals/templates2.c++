#include<iostream>
using namespace std;

template<class a,class b,class c>
class printkarden{
    public:
    a x;
    b y;
    c z;

    printkarden(a integer,b float,c string){
        x = a;
        y = b;
        z = c;
    }

    void printstring(){
        cout<<z<<endl;
    }

    
    void printint(){
        cout<<x<<endl;
    }

    void printfloat(){
        cout<<y<<endl;
    }
};

int main()
{
    printkarden<int,float,string> a1(1,1.1,"fahad");
    a1.printint();
    a1.printfloat();
    a1.printstring();
    return 0;
}
#include<iostream>
using namespace std;

template<class x = int,class y = float>
class fahad{
    public:
    x a;
    y b;
    
    void printpls(x a1,y a2){
        a = a1;
        b = a2;
        cout<<a<<","<<b<<endl;
    }
};


int main()
{
    fahad<> f1;
    f1.printpls(1,1.1);


    fahad<float,string> f2;
    f2.printpls(1.1,"hello");
    
    return 0;
}
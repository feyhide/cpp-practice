#include<iostream>
using namespace std;

class fahad{
    public:
    static int a;

    void increment(){
        a++;
    }
};

class fahad2:public fahad{
    public:

    void increment(){
        a++;
    }
};

int fahad::a = 0;

int main()
{
    fahad f1;
    cout<<f1.a<<endl;
	f1.a = 1;

    fahad2 f2;
    cout<<f2.a<<endl;
    f2.a++;
    cout<<f2.a<<endl;
    
    cout<<f1.a<<endl;
    return 0;
}

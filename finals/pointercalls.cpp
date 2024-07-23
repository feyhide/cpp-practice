#include<iostream>
using namespace std;

class fahad{
    public:
    fahad(){
        cout<<"yo"<<endl;
    }
};

int main()
{
    fahad * f;
    cout<<"no"<<endl;
    f = new fahad;
    return 0;
}
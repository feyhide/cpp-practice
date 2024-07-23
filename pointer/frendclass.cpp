#include<iostream>
using namespace std;

class privatehehe{
    int a;
    int b;
    public:
    privatehehe(int o,int q){
        a=o;
        b=q;
    }
    friend class b;
    friend void display(privatehehe);
};

class b{
    public:
    void display(privatehehe a1){
        cout<<a1.a+a1.b<<endl;
    }
};

void display(privatehehe a1){
        cout<<a1.a+a1.b<<endl;
}

int main()
{
    privatehehe p1(1,2);
    b b1;
    display(p1);
    return 0;
}
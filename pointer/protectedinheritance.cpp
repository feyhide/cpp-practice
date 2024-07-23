#include<iostream>
using namespace std;

class a{
    protected:
    int n;
    a(int n1):n(n1){};
    void a1(){
        cout<<"a"<<endl;
    }
};
class b{
    protected:
    string max;
    b(string m):max(m){};
    void b1(){
        cout<<"b"<<endl;
    }
};

class c:protected a,protected b{
    public:
    c(int n1,string m):b(m),a(n1){}
    void c1(){
        cout<<"c "<<n<<" "<<max<<endl;
        a1();
        b1();
    }
};



int main()
{
    c obj(1,"hello");
    obj.c1();

    return 0;
}


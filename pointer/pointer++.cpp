#include<iostream>
using namespace std;
class hello{
    public:
    int n;
    string b;
    void c(){
        cout<<n<<" "<<b<<endl;
    }
};

void bu(hello *p){
	p[1].n=0;
}
int main()
{
    hello *p = new hello;
    p->n=1;
    p->b="what";
    p->c();
	bu(p);
	
    hello *p1 = new hello[100];
    p1[0].n=1;
    p1[1].n=2;
    p1[0].c();
    p1[1].c();
    bu(p1);
    p1[1].c();
    
    
    
    return 0;
}

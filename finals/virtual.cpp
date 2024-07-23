#include<iostream>
using namespace std;

class fahad{
    public:
    virtual void speak(){
        cout<<"hello"<<endl;
    }
};

class hamza:public fahad{
    public:
    	void speak(){
    		cout<<"hello hamza"<<endl;
		}
};

class both:public hamza{
	public:
};

int main()
{
    fahad f1;
    f1.speak();
    hamza h1;
    h1.speak();
    both b1;
    b1.speak();
    return 0;
}

#include<iostream>
using namespace std;
class a{
    public:
    void hello(){
        cout<< "hello fahad" <<endl;
    }

    int hello(string name, int n){
        cout<<"hello 1"<<endl;
        return 1;
    }
    void hello(string name){
        cout<<"hello"<<endl;
    }
};

class adding{
    public:
    void add(int a,int b=0,int c=0,int d=0){
        cout<<a+b+c+d<<endl;
    }
};
int main()
{
    a obj;
    obj.hello("adsad");
    obj.hello();
    obj.hello("adsad",1);

    adding xxx;
    xxx.add(1);
    xxx.add(1,2);
    xxx.add(1,2,3);
    xxx.add(1,2,3,4);
    
    
    return 0;
}
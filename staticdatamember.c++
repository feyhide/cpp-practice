#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;//count zero se start hoga or wo sab se alag hoga class se jurjayega
    public:
        void setdata(void){
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<id<<" "<<count<<endl;
        }
};

int Employee::count;//yahan se iski default value change karsakte

int main()
{
    Employee a,b,c;
    a.setdata();
    a.getdata();
    b.setdata();
    b.getdata();
    c.setdata();
    c.getdata();
    return 0;
}
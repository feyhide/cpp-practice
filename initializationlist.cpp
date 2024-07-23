#include<iostream>
#include<cstring>
using namespace std;

/*
    Syntax for initialization list in constructor:
    constructor (argument-list) : initialization-section{
        assignment + other code;
    }
*/

class test{
    int a;
    int b;
    char name[100];
    char lvl;
    int health;
    public:
        // test(int i, int j) : a(i), b(j){
        //     cout<<a<<","<<b<<endl;
        //     cout<< "hello" <<endl;    
        // };
        
        // test(int i, int j) : a(i), b(i+j){
        //     cout<<a<<","<<b<<endl;
        //     cout<< "hello" <<endl;    
        // };
        
        // test(int i, int j) : a(i), b(a+j){
        //     cout<<a<<","<<b<<endl;
        //     cout<< "hello" <<endl;    
        // };
        
        // test(int i, int j) : a(b+i), b(j){
        //     cout<<a<<","<<b<<endl;
        //     cout<< "hello" <<endl;    
        // };
        test(char n[100],char l,int h) : lvl(l), health(h){
            strcpy(name,n);
            cout<<name<<endl<<lvl<<endl<<health<<endl;
        }
};

int main()
{
    test t("fahad",'A',100);
    return 0;
}
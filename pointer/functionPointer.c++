#include<iostream>
using namespace std;

int get(int a,int b){
    return a+b;
}

int set(int a,int b){
    return a-b;
}

void custom(int a,int b,int(*peepee)(int,int)){
    cout<<peepee(a,b)<<endl;
    cout<<set(a,b)<<endl;
}
int main()
{
    int(*peepee)(int,int) = set;
    custom(5,5,peepee);

    return 0;
}
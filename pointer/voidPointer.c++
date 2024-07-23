#include<iostream>
using namespace std;


void print(void *num){
    cout<< *((int*)num) << endl << *((char*)num) <<endl;
}
int main()
{
    int num=66;
    print(&num);
    return 0;
}
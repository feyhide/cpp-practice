#include<iostream>
using namespace std;
int main()
{
    int num[4] = {1,2,3,4};
    cout << num << endl << &num[0] << endl;
    //address of the first element

    cout<< &num[0] << " " << &num[2] <<endl;
    cout<< *(num+2) << endl<<endl;
    //adding address1+ 2 integer address which is 4 = address 3 and deref to its value

    for (int i = 0; i < 5; i++)
    {
        *(num+i) = i+2;
        cout<<num[i]<<endl;
    }
    
    return 0;
}
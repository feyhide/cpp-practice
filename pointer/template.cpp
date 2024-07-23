#include<iostream>
using namespace std;

template<class X>
X big(X a,X b){
    if(a>b){
        return a;
    }else{
        return b;
    }	
}

// int big(int a,int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }
// float big(float a,float b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }
int main()
{
    cout<<big(4,6)<<endl;
    cout<<big(4.2,6.7)<<endl;
    
    return 0;
}

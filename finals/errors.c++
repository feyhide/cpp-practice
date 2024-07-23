#include<iostream>
using namespace std;

template<class T,class T1>
class check{
    public:
    void check1(const T& a, const T1& b){
        cout << ((a>b) ? a:b) <<endl;
    }
};

int main()
{
    check<float,int> c1;
    c1.check1(4.4,1);
    return 0;
}

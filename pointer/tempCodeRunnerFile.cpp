#include<iostream>
using namespace std;

class a {
public:
    void hello() {
        cout << "1" << endl;
    }
};


class a1: public a{
public:
    void hello1() {
        cout << "1" << endl;
    }
};

int main() {

    a* obj = new a1;
    obj->hello();


    return 0;
}

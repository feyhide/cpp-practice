#include<iostream>
using namespace std;

class a {
public:
    virtual void hello() {
        cout << "1" << endl;
    }
};


class b: public a{
public:
    void hello() {
        cout << "2" << endl;
    }
    void boboo(){
        cout<<"gi"<<endl;
    }
};

int main() {
    b objb;
    a* obj = &objb;
    obj->hello();
    obj->boboo();


    return 0;
}

#include <iostream>
using namespace std;

class A {
public:
    A() { 
        cout << "\n A's constructor"; 
    }
    
    A(const A &a) { 
        cout << "\n A's Copy constructor";
    }
    
    A& operator=(const A &a)  { 
        if(this == &a) 
            return *this; 
        cout << "\n A's Assignment Operator";  
        return *this; 
    }
};

class B {
    A a;
public:
    B(A &a) { 
        this->a = a; 
        cout << "\n B's constructor"; 
    }
};

int main() {
    A a1;
    B b(a1);
    return 0;
}


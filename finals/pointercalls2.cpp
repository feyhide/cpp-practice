#include<iostream>
using namespace std;

class mobile {
public:
    virtual void speak() = 0;
    mobile() {
        cout << "mobile called" << endl;
    }
    virtual void call() {
        cout << "call room" << endl;
    }
};

class iphone : public mobile {
public:
    void speak() override {
        cout << "iphone" << endl;
    }
    iphone() {
        cout << "iphone called" << endl;
    }
};

class android : public mobile {
public:
    void speak() override {
        cout << "android" << endl;
    }
    android() {
        cout << "android called" << endl;
    }
};

int main() {
    mobile* m1 = new iphone;
    mobile* m2 = new android;

    m1->call(); // Corrected call syntax
    m2->call(); // Corrected call syntax

    delete m1;
    delete m2;

    return 0;
}


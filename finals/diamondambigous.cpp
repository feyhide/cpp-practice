#include <iostream>
using namespace std;

class Animal {
public:
    void whoAmI() {
        cout << "I am an Animal" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void whoAmI() {
        cout << "I am a Mammal" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void whoAmI() {
        cout << "I am a Bird" << endl;
    }
};

class Platypus : public Mammal, public Bird {
public:
    // No need to redefine whoAmI here
};

int main() {
    Platypus p;
    p.whoAmI();             // Output depends on virtual inheritance
    p.Mammal::whoAmI();     // Call Mammal's whoAmI
    p.Bird::whoAmI();       // Call Bird's whoAmI
    p.Animal::whoAmI();     // Call Animal's whoAmI

    return 0;
}


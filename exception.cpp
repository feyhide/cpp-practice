#include <iostream>
#include <string> // Include string header for using std::string
using namespace std;

class doc {
private:
    string name;
    int pages;

public:
    doc(int p, const string& n) : name(n), pages(p) {}

    void print() {
        if (pages <= 0)
            throw "No pages left to print."; // Throw const char* exception

            cout << name << endl;
            pages -= 1;
    }
};

int main() {
    doc d(2, "fahad");
    try {
        d.print();
        d.print();
        d.print();
        d.print();
        d.print();
    }
    catch (const char* error) { // Catch const char* exception
        cout << "Error: " << error << endl;
    }

    return 0;
}

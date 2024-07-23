#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file;
    file.open("matrix.txt", ios::in);
    
    if (!file) {
        cerr << "Unable to open file matrix.txt";
        return 1; // Return a non-zero value to indicate failure
    }
    
    char ch;
    while (1) {
    	ch = file.get();
        if (ch == '\n') {
            break; // Exit the loop if a newline character is encountered
        }
        cout << ch << endl;
    }
    
    file.close();
    return 0;
}


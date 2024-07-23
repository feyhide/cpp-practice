#include <iostream>
#include <string>// Include string header for using std::string
#include <fstream>
// Include string header for using std::string
using namespace std;



int main() {
    fstream myfile;
    myfile.open("fahad.txt", ios::out);
    if (myfile.is_open()) {
        myfile << "fahad is good boy" << endl;
        myfile << "fahad is good boy" << endl;
        myfile << "fahad is good boy" << endl;
    }

    myfile.close();
    myfile.open("fahad.txt", ios::in);
    if (myfile.is_open()) {
        string line;
        while (getline(myfile, line)) {
            cout << line << endl;
        }
    }
    myfile.close();
    return 0;
}

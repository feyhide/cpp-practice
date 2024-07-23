#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    // Open the file
    fstream file("fahad.txt", ios::in);
    
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    vector<vector<int>> matrix;
    string line;
    int numRows = 0;
    int numCols = 0;

    // Read the file line by line
    while (getline(file, line)) {
        stringstream ss(line);
        vector<int> row;
        int value;
        int colsInCurrentRow = 0;

        // Read each integer in the line
        while (ss >> value) {
            row.push_back(value);
            colsInCurrentRow++;
        }

        // Update column count for the first row
        if (numRows == 0) {
            numCols = colsInCurrentRow;
        } else if (colsInCurrentRow != numCols) {
            cerr << "Inconsistent number of columns in the file." << endl;
            return 1;
        }

        matrix.push_back(row);
        numRows++;
    }

    file.close();

    // Output the matrix dimensions
    cout << "Number of rows: " << numRows << endl;
    cout << "Number of columns: " << numCols << endl;

    // Output the matrix
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}


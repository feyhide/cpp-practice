#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;
int main()
{
    int i=0,j=0;
    string temp;
    vector<string> array;

    fstream file("fahad.txt",ios::in|ios::out);

    int rows;

    while(getline(file,temp)){
        array.push_back(temp);
    };
    
    i = array.size();

    if (i > 0) {
        stringstream ss(array[0]);
        int value;
        while (ss >> value) {
            j++;
        }
    }

    cout<<i<<j<<endl;

    int array1[i][j];
    
    for(int x=0;x < i;x++){
        stringstream ss(array[x]);
        for(int y=0;y<j;y++){
            ss >> array1[x][y];
        }
    }

    
    for(int x=0;x < i;x++){
        for(int y=0;y < j;y++){
            cout<<array1[x][y]<<"a";
        }
        cout<<endl;
    }
    

    return 0;
}

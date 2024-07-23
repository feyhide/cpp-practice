#include<iostream>
using namespace std;


int main()
{
    int *n = new int[5];
    for (int i = 0; i < 5; i++)
    {
        n[i] = i+2;
        cout<<n[i]<<endl;
    }

    delete[]n;
    n=NULL;
    
    int rows=3,cols=5;

    int **table = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            table[i][j]=i+6;
            cout<<table[i][j];
        }
        cout<<endl;
    }
    
    for (int i = 0; i < rows; i++)
    {
        delete[]table[i];
    }
    delete[] table;
    table = NULL;
    


    return 0;
}
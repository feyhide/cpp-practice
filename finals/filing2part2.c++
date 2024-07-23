#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;
int main()
{
    string str[100];
    string temp;
    int i = 0;
    fstream file("temp.txt",ios::in|ios::out);
    while(file >> temp){
    	str[i] = temp;
    	cout<<i<<endl;
    	i++;
	}
	
	for(int j = 0; j < i; j++){
		cout<<str[j]<<endl;
	}

    return 0;
}

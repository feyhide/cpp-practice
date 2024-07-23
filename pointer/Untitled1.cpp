#include<iostream>
using namespace std;

template<typename t,int length>
class array{
	private: 
	t array[length];
	public:
	void fill(t num){
		for(int i = 0; i<length;i++){
			array[i] = num;
		}
	}
	t find(int index){
		return array[index];
	}
};


int main()
{
	array<int,7> a1;
	a1.fill(3);
    cout<<a1.find(0)<<endl;
    cout<<a1.find(1)<<endl;
    cout<<a1.find(2)<<endl;
    cout<<a1.find(3)<<endl;
    
    array<string,7> a2;
	a2.fill("a");
    cout<<a2.find(0)<<endl;
    cout<<a2.find(1)<<endl;
    cout<<a2.find(2)<<endl;
    cout<<a2.find(3)<<endl;
    return 0;
}

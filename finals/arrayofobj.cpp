#include<iostream>
using namespace std;
template<class t>
class fahad{
    public:
    int i;
    fahad(){
        i=0;
    }
    t *array[100];
    void addarray(t *obj){
        array[i] = obj;
        i++;
    }
    void speakarray(){
    	for(int j = 0; j < i;j++){
    		array[j]->speak();
		}
	}
};

class mobile{
    public:
	void virtual speak() = 0;
};
class iphone:public mobile{
    public:
    void speak(){
        cout<<"iphone"<<endl;
    }
};
class android:public mobile{
    public:
    void speak(){
        cout<<"android"<<endl;
    }
};

int main()
{
    mobile* m1 = new iphone;
    
    mobile* m2 = new android;

    fahad<mobile> f1;
    f1.addarray(m1);
    f1.addarray(m2);
    
    f1.speakarray();
    return 0;
}

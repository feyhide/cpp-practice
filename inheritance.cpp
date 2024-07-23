#include<iostream>
#include<cstring>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;
    }
    
    void setage(int a){
        this->age = a;
    }
    
    void setheight(int h){
        this->height = h;
    }
};

class male: public human{
    public:
    char color[100];
    void setcolor(char c[100]){
        strcpy(color,c);
    }
    void sleep(){
        cout<< "male slep slep" <<endl;
    }
    
};

int main()
{
    male object1;
    object1.setweight(100);
    object1.setage(19);
    object1.setheight(122);
    object1.setcolor("red");
    cout<< object1.age <<endl << object1.height <<endl << object1.weight <<endl;
    cout<< object1.color <<endl;
    object1.sleep();
    return 0;
}
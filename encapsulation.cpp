#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int age;
        int height;
    public:
        void setage(int a){
            this->age = a;
        }
        int age2(){
            return this->age;
        }
};
int main()
{
    
    //wrapping up data member and function into single entity
    student f1;
    f1.setage(19);
    cout<< f1.age2() <<endl;
    return 0;
}
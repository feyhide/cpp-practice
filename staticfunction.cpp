#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    static int time;
    static int random(){
        return time;
    }
};

int hero::time = 199;

int main()
{
    
    //object banane ki need nhi plus 'this' keyword ki need nhi
    //static function only access static members
    cout<< hero::random() <<endl;
    
    return 0;
}
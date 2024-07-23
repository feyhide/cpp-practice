#include<iostream>
using namespace std;
class hero{
    public:
    static int timetocomplete;
};
int hero::timetocomplete = 5;

int main()
{
    //object banane ki need nhi hai
    // cout<< hero::timetocomplete <<endl;
    //agar object banayenge to bhi same ans ayega
    hero a;
    cout<< a.timetocomplete <<endl;
    hero b;
    b.timetocomplete = 10;
    //timetocomplete sab keliye change hojayega
    cout<< a.timetocomplete <<endl;
    cout<< b.timetocomplete <<endl;
    
    return 0;
}
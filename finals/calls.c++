#include<iostream>
using namespace std;

class shape{
    public:
    shape(){
        cout<<"shape cons"<<endl;
    }
    
    ~shape(){
        cout<<"shape dest"<<endl;
    }
};

class circle:public shape{
    public:
    circle(){
        cout<<"circle cons"<<endl;
    }
    
    ~circle(){
        cout<<"circle dest"<<endl;
    }
};
class sphere:public shape{
    public:
    sphere(){
        cout<<"sphere cons"<<endl;
    }
    
    ~sphere(){
        cout<<"sphere dest"<<endl;
    }
};
class both:public sphere,public circle{
    public:
    both(){
        cout<<"both cons"<<endl;
    }
    
    ~both(){
        cout<<"both dest"<<endl;
    }
};

int main()
{

    both b1;
    return 0;
}

#include<iostream>

using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){
            counter=0;
        }
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);
};

void shop::setPrice(void){
    cout<<"id"<<endl;
    cin>>itemID[counter];
    cout<<"price"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<itemID[i]<<" "<<itemPrice[i]<<endl;
    }  
}


int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
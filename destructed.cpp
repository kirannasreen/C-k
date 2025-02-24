#include<iostream>
using namespace std;
class car{
    public:
    car(){
        cout<<"This car is created"<<endl;
    }
    ~car(){
        cout<<"Car is destroyed"<<endl;
    }
};
int main()
{
    car c1;
    return 0;
}
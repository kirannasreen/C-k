#include<iostream>
using namespace std;
class vol{
    public:
    vol()
    {
        cout<<"This area is constructed"<<endl;
    }
};
int main()
{
    vol v1;
    return 0;
}
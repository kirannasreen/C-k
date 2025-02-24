#include<iostream>
using namespace std;
class student{
    private:
    int rollno=1;
    string name="Ali";
    public:
    void display()
    {
        cout<<"The roll number is "<<rollno<<endl;
        cout<<"The name is "<<name;
    }
};
int main()
{
    student s;
    s.display();
    return 0;
}
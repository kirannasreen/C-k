#include <iostream>
using namespace std;
int main() 
{
    int multiplier = 5;
    cout << "Table of 5:" << endl;
    for (int i = 1; i <= 10; ++i) 
    {
        int result = multiplier * i;
        cout << multiplier << " * " << i << " = " << result <<endl;
    }

    return 0;
}


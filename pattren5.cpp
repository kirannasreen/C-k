#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    // Upper part of the diamond
    for (int i = 1; i <= n; ++i)
    {
        for (int j = n; j > i; --j)
        { // Print spaces
            cout << "  ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) { // Print X's
            cout << "* ";
        }
        cout << endl;
    }
    // Lower part of the diamond
    for (int i = n - 1; i >= 1; --i) {
        for (int j = n; j > i; --j)
         { // Print spaces
            cout << "  ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) 
        { // Print X's
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
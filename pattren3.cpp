#include<iostream>
using namespace std;
// Function to draw pattern 5 (diamond shape)
int main(){
    int n = 5;
    // Upper part of the diamond
    for (int i = 1; i <= n; ++i)
    {
        for (int j = n; j > i; --j)
        { // Print spaces
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) { // Print X's
            cout << "*";
        }
        cout << endl;
    }
return 0;
}

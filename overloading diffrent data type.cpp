#include <iostream>
using namespace std;

// Function to display an integer
void display(int a) {
    cout << "Integer: " << a << endl;
}

// Function to display a double
void display(double a) {
    cout << "Double: " << a << endl;
}

// Function to display a string
void display(string a) {
    cout << "String: " << a << endl;
}

int main() {
    display(10);       // Calls display(int)
    display(5.5);      // Calls display(double)
    display("Hello");  // Calls display(string)
    
    return 0;
}


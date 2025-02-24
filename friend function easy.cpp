#include <iostream>
using namespace std;

class Box {
    int width; // Private member

public:
    Box(int w) { width = w; }

    // Declare friend function
    friend void printWidth(Box b);
};

// Define the friend function (outside the class)
void printWidth(Box b) {
    cout << "Width: " << b.width << endl; // Access private member
}

int main() {
    Box b(10); // Create object with width = 10
    printWidth(b); // Call the friend function

    return 0;
}


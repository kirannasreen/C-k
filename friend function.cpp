// friend function
#include<iostream>
using namespace std;

class Complex {
    int a, b;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // Friend function declaration
    friend Complex sumComplex(Complex o1, Complex o2);
};

// Friend function definition (Not a member of class)
Complex sumComplex(Complex o1, Complex o2) {
    Complex temp;
    temp.a = o1.a + o2.a;  // Accessing private members
    temp.b = o1.b + o2.b;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    c1.setNumber(12, 36);
    c2.setNumber(15, 30);

    c1.printNumber();
    c2.printNumber();

    // Call friend function
    c3 = sumComplex(c1, c2);
    cout << "Sum of complex numbers: ";
    c3.printNumber();

    return 0;
}


#include <iostream>
using namespace std;

// Function prototypes
int sum(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float division(int a, int b);

int main()
{
    int a, b;
    char c;

    // Input for the first number
    cout << "Enter the value of the first number: ";
    cin >> a;

    // Input for the second number
    cout << "Enter the value of the second number: ";
    cin >> b;

    // Input for the operator
    cout << "Choose the operator (+, -, *, /): ";
    cin >> c;

    // Perform the chosen operation
    switch (c)
    {
    case '+':
        cout << "The result is: " << sum(a, b) << endl;
        break;
    case '-':
        cout << "The result is: " << subtract(a, b) << endl;
        break;
    case '*':
        cout << "The result is: " << multiply(a, b) << endl;
        break;
    case '/':
        if (b != 0)
            cout << "The result is: " << division(a, b) << endl;
        else
            cout << "Error: Division by zero is not possible!" << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

// Function definitions
int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float division(int a, int b)
{
    return static_cast<float>(a) / b; // Cast to float for accurate division
}

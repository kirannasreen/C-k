#include <iostream>
using namespace std;
int main() {
    int currentAge, totalAge;

    cout << "Enter your current age: ";
    cin >> currentAge;

    cout << "Enter the total age you want to live: ";
    cin >> totalAge;

    if (totalAge <= 0) {
        cout << "Total age must be greater than 0." << std::endl;
        return 1;
    }

    double agePercentage = (static_cast<double>(currentAge) / totalAge) * 100;

    cout << "You have lived " << agePercentage << "% of your total age." << endl;

    return 0;
}
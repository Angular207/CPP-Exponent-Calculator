#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{   
    int base, exponent;
    int showAnswer;
    cout << "Welcome to the Exponent Calculator!" << endl;
    cout << "What is the base number?: " << endl;
    cin >> base;
    cout << "What is the power?: " << endl;
    cin >> exponent;
    double power = pow(base, exponent);
    cout << "The answer is " << power << "." << endl;
    cout << "Thank you for trying out this program!" << endl;
}
#include <iostream>
#include <string>
using namespace std;

int forceCalculator() {
    const int gravity = -9.8;

    int mass;
    cout << "Enter mass (in integer format): ";
    cin >> mass;
    cout << "Mass entered: " << mass << endl;
    cout << "Your force is: " << mass * gravity << endl;
    return 0;
}

int cinTester() {
    int a;
    int b;
    cin >> a;
    cout << a << endl;
    cin.fail();
    cin.clear();
    cin.ignore(100, '\n');
    cin >> b;
    cout << b << endl;
    return 0;
}

int calculator () {
    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter another Number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}

int stringInput() {
    string s;
    cin >> s;
    cout << s << endl;
    return 0;
}

int main() {
    forceCalculator();
    cinTester();
    calculator();
    stringInput();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Display program title
    cout << "===== Hello World Program =====" << endl;

    // Declare variables
    string name, city;
    int age;

    // Take user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter your city: ";
    getline(cin, city);

    // Display user information
    cout << "\n===== User Information =====" << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
    cout << "City : " << city << endl;

    // Formatted output
    cout << "\nHello, " << name << "!" << endl;
    cout << "You are " << age << " years old and you live in " << city << "." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name; //ask user to enter the name

    cout << "Enter your age: ";
    cin >> age; //ask the user to enter the age

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

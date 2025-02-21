INTRODUCTION TO OOP WITH C++

IN  helloworld.cpp: 

#include <iostream> :  This includes a library that allows us to use cout to print  out messages to the console.

using namespace std; : This makes writing simpler (otherwise, we’d have to type std::cout).

 int main() – Every C++ program must have a main() function—this is where the program starts.

cout << "Hello, World!"; – This prints "Hello, World!" to the screen.

 return 0; This ends the program successfully.

IN  VARIABLES.CPP:


int age = 20; → Declares an integer variable age and assigns it the value 20.

double price = 19.99;   Declares a double variable price and assigns it the value 19.99.

char grade = 'A';    Declares a character variable grade and assigns it the letter 'A'.

string name = "Alice"; → Declares a string variable name and assigns it "Alice".

cout << "\nName: " << name << endl; → Prints a new line, followed by "Name: Alice", then moves to the next line.

cout << "Age: " << age << endl; → Prints "Age: 20" and moves to the next line.

cout << "Price: $" << price << endl; → Prints "Price: $19.99" and moves to the next line.

cout << "Grade: " << grade << endl;   Prints "Grade: A" and moves to the next line.

IN USERINPUT.CPP

string name; → Declares a string variable name to store user input.

int age; → Declares an integer variable age to store user input.

cout << "Enter your name: "; → Prompts the user to enter their name.

cin >> name; → Takes user input and stores it in the name variable (only captures a single word).

cout << "Enter your age: "; → Prompts the user to enter their age.

cin >> age; → Takes user input and stores it in the age variable.

cout << "Hello, " << name << "! You are " << age << " years old." << endl; → Displays a greeting message using the entered name and age.

IN OPERATORS.CPP

Declares two integer variables a and b with values 40 and 17 Respectively
Prints the sum of a and b (40 + 17 = 57) and then
Prints the difference between a and b (40 - 17 = 23).
Prints the product of a and b (40 * 17 = 680).
Prints the integer division of a by b (40 / 17 = 2, discards decimal part)
Prints the remainder of a divided by b (40 % 17 = 6)

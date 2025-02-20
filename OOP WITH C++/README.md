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

IN  IF-ELSE ELSE-IF.CPP

Declares two integer variables, a and b.
Prompts the user to enter a value for a.
Reads the user input into a.
Prompts the user to enter a value for b.
Reads the user input into b.
Checks if a is greater than b and prints a message if true.
Checks if a is less than b and prints a message if true.
If neither condition is met, prints that a is equal to b.

IN  FOR-LOOP.CPP

Initializes i to 1.
Loops while i is less than or equal to 10.
Prints the current value of i.
Increments i by 1 in each iteration.

IN WHILE LOOP.CPP

Initializes i to 1.
Starts a while loop that runs as long as i is ≤ 10.
Prints the current value of i.
Increments i by 1 in each iteration.

IN DO-WHILE LOOP.CPP

Initializes i to 1.
Executes the do block at least once.
Prints the current value of i.
Increments i by 1.
Repeats the loop while i is ≤ 10.

IN FUNCTIONS.CPP

Defines a function average that takes two integers and returns their average.
Calculates the average by adding a and b, then dividing by 2.
In main(), calls average(43, 176) and stores the result in result.
Prints the computed average.

IN  ARRAY.CPP

Declares an array my_array of size 5 and initializes it with values {10, 18, 20, 34, 45}.
Loops through the array from index 0 to 4.
Prints each element of the array on a new line.

IN EVEN-ODD.CPP

Declares an integer variable number.
  Prompts the user to enter a value to test.
cin>>number:  Reads the user input into number.
Checks if the number is divisible by 2 (even).
Prints "the number is even" if true.
Prints "The number is odd" if false.

IN CALCULATOR.CPP

Declares a char variable operation and two double variables num1 and num2.
Prompts the user to enter an operation (+, -, *, or /).
Reads the user input for the operation.
Prompts the user to enter two numbers.
Reads the user input for the numbers num1 and num2.
Uses a switch statement to perform the operation based on the entered operator.
Performs addition, subtraction, multiplication, or division based on the operator.
Checks if division by zero is attempted and displays an error message if true.
Displays an error message if an invalid operator is entered.
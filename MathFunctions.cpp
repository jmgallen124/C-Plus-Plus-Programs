#include <iostream>
#include <string>
using namespace std;

// Function to add numbers
int addNums(int add1, int add2) {
    return add1 + add2;
}

// Function to subtract numbers
int subNums(int sub1, int sub2) {
    return sub1 - sub2;
}

// Function to multiply numbers
int multiNums(int multi1, int multi2) {
    return multi1 * multi2;
}

// Function to divide numbers
int divideNums(int divide1, int divide2) {
    return divide1 / divide2;
}

// Main program to demonstrate functions
int main() {
    
    // Declare variables
    int num1, num2;
    
    // Ask for first number
    cout << "Please input the first number: ";
    cin >> num1;
    
    // Ask for second number
    cout << "\nPlease input the second number: ";
    cin >> num2;
    cout << endl;
    
    // Display numbers added, subtracted, multiplied, and divided
    cout << endl << num1 << " + " << num2 << " = " << addNums(num1, num2);
    cout << endl << num1 << " - " << num2 << " = " << subNums(num1, num2);
    cout << endl << num1 << " * " << num2 << " = " << multiNums(num1, num2);
    cout << endl << num1 << " / " << num2 << " = " << divideNums(num1, num2) << endl;
    
    // End main program
	return 0;
}

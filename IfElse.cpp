#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate if/else statement
int main() {
    
    // Declare age variable
    int age = 0;
    
    // Ask for age
    cout << "Please enter your age to see if you're eligible for vaccination: ";
    cin >> age;
    
    // If/else to see if eligible for vaccination
    if (age >= 18) {
        cout << "\nYou are eligible for vaccination.\n";
    } else {
        cout << "\nYou are not eligible for vaccination.\n";
    }
    
	// End program
	return 0;
}

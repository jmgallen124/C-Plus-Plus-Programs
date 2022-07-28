#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate string functions
int main() {
    
    // Declare string
    string firstName;
    
    // Ask for first namespace
    cout << "Please enter your first name: ";
    cin >> firstName;
    
    // Display length of name
    cout << "\nYour name is " << firstName.length() << " characters long.";
    
    // Display name backwards
    cout << "\nYour name backwards is: ";
    
    // For loop to display name backwards
    for (int i = firstName.length() - 1; i >= 0; i--) {
        cout << firstName[i];
    }
    
    // New line 
    cout << endl;
    
	// End program
	return 0;
}

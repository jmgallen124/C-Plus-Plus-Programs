#include <iostream>
#include <string>
using namespace std;

// Function to display age
void printAge() {
    
    // Declare age variable
    int age = 38;
	
    // Function to output age
    cout << age << ".\n";
}

// Main function to call function to print age variable
int main() {
	
	// Print age variable
	cout << "My age is ";
	printAge();
	
	// End program
	return 0;
}

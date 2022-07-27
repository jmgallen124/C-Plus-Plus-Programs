#include <iostream>
#include <string>
using namespace std;

int globalVar = 30;

// Function to print local variable
void print() {
    
    // Output global variable
    cout << globalVar << endl;
    
}

// Main program to demonstrate global variables
int main() {
    
	// Call print function
	print();
	
	// Redeclare global variable and call print function
	globalVar = 300;
	print();
	
	// End program
	return 0;
}

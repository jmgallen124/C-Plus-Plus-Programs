#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate while and do/while loops
int main() {
    
    // Letter variable
    char letter;
    
    // While demo loop
    while (letter != 'q') {
        
        // Get letter input
        cout << "Hello there! Enter q to quit or another letter to see this message again: ";
        cin >> letter;
    }
    
    // Do/While loop
    do {
        
        // Get letter input
        cout << "Hello, again! Enter q to end this program: ";
        cin >> letter;
    
    // While condition    
    } while (letter != 'q');
    
	// End program
	return 0;
}

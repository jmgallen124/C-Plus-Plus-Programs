#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate for loops
int main() {
    
    // for loop to print a square with a cross in the center
    for (int a = 1; a <= 6; a++) {
        cout << "HHHIIIHHH\n";
        if (a == 3) {
            for (int b = 1; b <= 3; b++) {
                cout << "IIIIIIIII\n";
            }
        }
    }
    
	// End program
	return 0;
}

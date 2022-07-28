#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate switch statement
int main() {
    
    // Declare age variable
    int age = 0;
    
    // Ask for age
    cout << "Please enter your age: ";
    cin >> age;
    
    // Switch statement for age
    switch(age) {
        case 0 ... 2:
            cout << "\nYou are in your infancy.\n";
            break;
        case 3 ... 12:
            cout << "\nYou are in your childhood.\n";
            break;
        case 13 ... 19:
            cout << "\nYou are an adolescent.\n";
            break;
        case 20 ... 29:
            cout << "\nYou are in your twenties.\n";
            break;
        case 30 ... 39:
            cout << "\nYou are in your thirties.\n";
            break;
        case 40 ... 49:
            cout << "\nYou are middle-aged.\n";
            break;
        case 50 ... 59:
            cout << "\nYou are in your fifties.\n";
            break;
        case 60 ... 120:
            cout << "\nYou are a senior citizen.\n";
            break;
        default:
            cout << "\nInvalid age.\n";
            break;
    }
    
	// End program
	return 0;
}

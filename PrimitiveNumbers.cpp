#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate different primitive data types
int main() {
    
    // Declare short integer
    short shortInt = 8;
    
    // Declare regular integer
    int regInt = 80;
    
    // Declare long integer
    long longInt = 80000;
    
    // Declare extra long integer
    long long xLongInt = 800000;
    
    // Declare decimal number
    float floatNum = 8.8;
    
    // Declare longer decimal
    double doubleNum = 8.888;
    
    // Declare extra long decimal
    long double longDoubleNum = 8.88888;
    
    // Output integers
    cout << "**Integers**" << endl;
    cout << "Short Integer: " << shortInt << endl;
    cout << "Regular Integer: " << regInt << endl;
    cout << "Long Integer: " << longInt << endl;
    cout << "Extra Long Integer: " << xLongInt << endl << endl;
    
    // Output decimals
    cout << "**Decimals**" << endl;
    cout << "Floating Number: " << floatNum << endl;
    cout << "Double Number: " << doubleNum << endl;
    cout << "Long Double: " << longDoubleNum << endl;
    
	// End program
	return 0;
}

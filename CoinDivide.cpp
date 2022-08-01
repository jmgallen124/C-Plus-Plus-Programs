// Program to divide value into coin
#include <iostream>
#include <string>
using namespace std;

// Function to print coin values
void printValues(int coin1, int coin2, int coin5, int coin10, int coin25, int coin50, int coin100, int total) {
    
    // Print coin values
    cout << "1 Coins: " << coin1 << endl;
    cout << "2 Coins: " << coin2 << endl;
    cout << "5 Coins: " << coin5 << endl;
    cout << "10 Coins: " << coin10 << endl;
    cout << "25 Coins: " << coin25 << endl;
    cout << "50 Coins: " << coin50 << endl;
    cout << "100 Coins: " << coin100 << endl;
    cout << "Total Coins: " << total << endl;
}

// Function to divide coins
void divideCoins(int coinValue) {
    
    // Declare coin counters
    int oneCoins = 0, twoCoins = 0, fiveCoins = 0, tenCoins = 0, twentyFiveCoins = 0, fiftyCoins = 0, hundredCoins = 0,
        totalCoins = 0;
    
    // Do loop to divide and count coins
    do {
        
        // If statement to check number of coins
        if(coinValue >= 100) {
            hundredCoins = coinValue / 100;
            totalCoins += hundredCoins;
            coinValue %= 100;
        } else if(coinValue >= 50) {
            fiftyCoins = coinValue / 50;
            totalCoins += fiftyCoins;
            coinValue %= 50;
        } else if(coinValue >= 25) {
            twentyFiveCoins = coinValue / 25;
            totalCoins += twentyFiveCoins;
            coinValue %= 25;
        } else if(coinValue >= 10) {
            tenCoins = coinValue / 10;
            totalCoins += tenCoins;
            coinValue %= 10;
        } else if(coinValue >= 5) {
            fiveCoins = coinValue / 5;
            totalCoins += fiveCoins;
            coinValue %= 5;
        } else if(coinValue >= 2) {
            twoCoins = coinValue / 2;
            totalCoins += twoCoins;
            coinValue %= 2;
        } else {
            oneCoins = coinValue;
            totalCoins += oneCoins;
            coinValue = 0;
        }
    
    // End of while loop
    } while(coinValue != 0);
    
    // Call function to print totals
    printValues(oneCoins, twoCoins, fiveCoins, tenCoins, twentyFiveCoins, fiftyCoins, hundredCoins, totalCoins);
}

// Main program to count number of coins indicative of values
int main() {
    
    // Declare coin holder variables
    int inputValue = 0, oneCoins = 0, twoCoins = 0, fiveCoins = 0, tenCoins = 0, twentyFiveCoins = 0, fiftyCoins = 0, hundredCoins = 0,
        totalCoins = 0;
    
    // Ask for input
    cout << "Input a monetary value: ";
    cin >> inputValue;
    
    // Call coin division function
    divideCoins(inputValue);
    
    // Print specific and total number of coins
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// Main program to demonstrate arrays
int main() {
    
    // Declare string
    string booksAuthors[5][3] = {
        {"Terry Goodkind", "Wizard's First Rule", "Stone of Tears"},
        {"Robert Jordan", "The Eye of the World", "The Great Hunt"},
        {"Terry Brooks", "The Genesis of Shannara", "The Fall of Shannara"},
        {"C.S. Lewis", "The Magician's Nephew", "The Lion, the Witch, and the Wardrobe"},
        {"Brian Jacques", "Redwall", "Mossflower"}
    };
    
    // For loop to output array contents
    for(int author=0; author < 5; author++) {
        for(int book=0; book < 3; book++) {
            cout << booksAuthors[author][book] << " ";
            if(book == 0) {
                cout << ": ";
            }
        }
        cout << endl;
    }
    
	// End program
	return 0;
}

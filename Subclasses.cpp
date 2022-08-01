#include <iostream>
#include <string>
using namespace std;

// Create Player class
class Player {
    public:
        string alias;
        string weapon;
        string gender;
        int age;
        int level;
        void setAttributes(string n, string w, string g, int a, int l) {
            alias = n;
            weapon = w;
            gender = g;
            age = a;
            level = l;
        }
        void printAttributes() {
             cout << "The character's alias is " << alias
                  << ", their weapon of choice is " << weapon
                  << ", their gender is " << gender
                  << ", their age is " << age
                  << ", and their starting level is " << level << ".\n";
        }
    private:
        string sexuality;
        string allegiance;
};

// Create Druid subclass
class Druid : public Player {
    public:
        void printAttributes() {
             cout << "The character's class is Druid, their alias is " << alias 
                  << ", their weapon of choice is " << weapon
                  << ", their gender is " << gender
                  << ", their age is " << age
                  << ", their starting level is " << level
                  << ", and their talent is animals.\n";
        }
};

// Main program to demonstrate classes
int main() {
    
    // Declare Player object
    Player Jeremy;
    
    // Set Player attributes
    Jeremy.setAttributes("Remy", "fists", "male", 38, 1);
    
    // Print Player attributes
    Jeremy.printAttributes();
    
    // Declare Druid object
    Druid GRemy;
    
    // Set Druid attributes
    GRemy.setAttributes("Remy", "fists", "male", 38, 1);
    
    // Print Druid attributes
    GRemy.printAttributes();
    
    // End main program
	return 0;
	
}

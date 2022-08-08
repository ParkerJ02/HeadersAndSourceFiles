/*
Parker Haynie
7/5/2022
Prisoners Escape (Interactive Text Simulation)
*/

// This is the header function that contains all of the functions like "cout" and "cin".
#include <iostream>
// This is the header that tells the program to use a variable that has a type std::string. 
#include <string>
// This includes my own header file that I created for this project.
#include "interactiveStory.h"

// This tells the program to look at the standard namespace for everything that is not declared.
using namespace std;

// This is the "main()" function. This is the first function that the program looks at.
int main()
{
    // This displays whatever is in the "displayTitle()" function to the command terminal.
    cout << displayTitle() << endl;
    // This displays whatever is in the "divider()" function to the command terminal.
    cout << divider() << endl;
    // This displays whatever is in the "displayDescription()" function to the command terminal.
    cout << displayDescription() << endl;
    // This displays whatever is in the "displayInstructions()" function to the command terminal.
    cout << displayInstructions() << endl;
    // This displays whatever is in the "divider()" function to the command terminal.
    cout << divider() << endl;
    // This displays whatever is in the "storySetup()" function to the command terminal.
    cout << storySetup() << endl;
    // This displays whatever is in the "divider()" function to the command terminal.
    cout << divider() << endl;
    // This displays whatever is in the "questionnaire()" function to the command terminal.
    cout << questionnaire() << endl;
    // This displays whatever is in the "exitMessage()" function to the command terminal.
    cout << exitMessage() << endl;
}

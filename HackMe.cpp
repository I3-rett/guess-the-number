#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int varInt = rand() % 101; // Random number between 0 and 100
    int userGuess;
    int attempts = 0; // Counter for number of tries

    cout << "Guess the value of varInt (between 0 and 100)!" << endl;

    do {
        cout << "Enter your guess : ";
        cin >> userGuess;
        attempts++; // Increment counter on each guess

        if (userGuess < varInt) {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > varInt) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You found the correct value: " << varInt << endl;
            cout << "It took you " << attempts << " attempts." << endl;

            // Pause before exit
            cout << "Press ENTER to exit...";
            cin.ignore(); // Ignore the newline character from previous input
            cin.get();    // Wait for user to press Enter
            return EXIT_SUCCESS;
        }
    } while (userGuess != varInt); // Repeat until the user finds the correct number
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numberToGuess, userGuess, attempts = 0;

    // Seed the random number generator with current time
    srand(time(0));
    numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != numberToGuess);

    return 0;
}

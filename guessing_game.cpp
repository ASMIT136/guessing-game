#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int randomNumber = rand() % 100 + 1; 
    int userGuess = 0;
    int attemptCount = 0;
    
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attemptCount++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attemptCount << " attempts." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}

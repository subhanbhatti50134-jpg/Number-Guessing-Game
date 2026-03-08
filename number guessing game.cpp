#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    string input;
    
    cout << "   WELCOME TO THE NUMBER GUESSING GAME!" << endl;
    cout << " " <<"I'm thinking of a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;
    cout << "I'll give you hints if your guess is too high or too low." << endl;
    cout << "Enter 0 to quit the game at any time." <<" "<< endl;
    
    do {
        cout << "Enter your guess: ";
        cin >> input;
        
        bool isValid = true;
        for (char c : input) {
            if (!isdigit(c)) {
                isValid = false;
                break;
            }
        }
        
        if (!isValid) {
            cout << "Please enter a valid number!" << endl;
            continue;
        }
        
        guess = stoi(input);
        
        if (guess == 0) {
            cout <<" " <<"Thanks for playing! The number was " << secretNumber << "." << endl;
            cout << "You made " << attempts << " attempts." << endl;
            break;
        }
        
        if (guess < 1 || guess > 100) {
            cout << "Please guess a number between 1 and 100!" << endl;
            continue;
        }
        
        attempts++;
        if (guess == secretNumber) {
            cout <<" " <<" CONGRATULATIONS! You guessed it!" << endl;
            cout << "The number was " << secretNumber << "." << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break;
        }
        else if (guess < secretNumber) {
            cout << " Too low! Try a higher number." << endl;
        }
        else {
            cout << " Too high! Try a lower number." << endl;
        }
        
    } while (true);
    
    cout <<" " <<"Thanks for playing!" << endl;
    
    return 0;
}
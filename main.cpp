#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generateNumber() {
    srand(static_cast<unsigned int>(time(0)));
    string number = "";
    for (int i = 0; i < 4; ++i) {
        number += to_string(rand() % 10);
    }
    return number;
}

void countBullsAndCows(const string& guess, const string& secret, int& bulls, int& cows) {
    bulls = 0;
    cows = 0;
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == secret[i]) {
            ++bulls;
        }
        else if (secret.find(guess[i]) != string::npos) {
            ++cows;
        }
    }
}

void playGame(const string& secret, int attempts) {
    string guess;
    cout << "Enter your four-digit guess: ";
    cin >> guess;

    int bulls, cows;
    countBullsAndCows(guess, secret, bulls, cows);

    if (bulls == 4) {
        cout << "Congratulations! You guessed the number " << secret << " in " << attempts << " attempts." << endl;
        return;
    }
    else {
        cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
        playGame(secret, attempts + 1);
    }
}

int main() {
    string secretNumber = generateNumber();
    cout << "The game \"Bulls and Cows\" has started! Guess the four-digit number." << endl;
    playGame(secretNumber, 1);
    return 0;
}

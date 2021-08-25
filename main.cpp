#include <iostream>

using namespace std;

const int target = rand() % 100 + 1;
unsigned int guesses = 7;

void run();

int main(){

    cout << "Welcome to the number guessing game!" << endl;

    run();

    return 0;
}



void run(){
    int guess;
    bool end_game = false;

    while (guesses > 0 && end_game == false){
        cout << "Input a number as your guess: ";
        cin >> guess;
        if (guesses == 0){
            cout << "Sorry, you could not guess the secret number. The secret number was " << target << endl;
        }
        if (guess > target){
            cout << "Sorry, your guess was too high. You have " << guesses - 1 << " guesses remaining." << endl;
            guesses -= 1;
        }
        else if (guess < target){
            cout << "Sorry, your guess was too low. You have " << guesses - 1 << " guesses remaining." << endl;
            guesses -= 1;
        }
        else {
            cout << "CONGRATULATIONS! You guessed the secret number correctly!" << endl;
            end_game = true;
        }
    }


}

#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;



int main() {

    int userGuess;
    srand(time(NULL));
    int randomNum = 1 + (rand() % 100);


    while (userGuess != randomNum) {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;
        if (userGuess == randomNum) {
            cout << "You got it!";

        } else if (userGuess > randomNum) {
            cout << "Your guess is too high" << endl;
        } else if (userGuess < randomNum) {
            cout << "Your guess is too low" << endl;
        }


    }
        return 0;
}
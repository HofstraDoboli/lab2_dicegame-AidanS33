/* Add your name here */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    char S = 'a'; 
    cout << "Welcome to the Dice Game! In this game you will roll 2 dice. If you roll a 7 or 11, you win. If you roll a 2,3,or 12, you lose. " << endl;
    cout << "To play the game, type Y ";
    cin >> S;
    while (S == 'Y' || 'y') {
        int dice1;
        dice1 = rand()%6+1;
        int dice2;
        dice2 = rand()%6+1;
        int sum;
        sum = dice1 + dice2;
        cout << "You rolled a " << dice1 << " and a " << dice2 << " For a sum of " << sum << endl;
        if (sum == 7 || 11) {
            cout << "Congratulations! You Win!" << endl;
        }
        else if (sum == 2 || 3 || 12) {
            cout << "I'm Sorry, You Lost." << endl;
        }
        else {
            int point = sum;
            cout << "Your point is " << point << endl;
            bool not_win = false;
            bool not_loss = false;
            while (not_win && not_loss == true) {
                dice1 = rand()%6+1;
                dice2 = rand()%6+1;
                sum = dice1 + dice2;
                cout << "You rolled a " << dice1 << "and a " << dice2 << "for a sum of " << sum << endl;
                if (sum != point) {
                    not_win = false;
                }
                if (sum == 7){
                    not_loss = false;
                }
                if (not_win == true){
                    cout << "You lose. " << endl;
                }
                else{
                    cout << "You win! " << endl;
                }
            }
        }
    cout << "Would you like to play again? ";
    cin >> S;
    }
}



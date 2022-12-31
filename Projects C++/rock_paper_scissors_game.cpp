#include <iostream>
using namespace std;

void userInputDisplay(int a)
{
    if (a == 1)
    {
        cout << "You played Rock\n";
    }
    else if (a == 2)
    {
        cout << "You played Paper\n";
    }
    else
    {
        cout << "You played Scissor\n";
    }
}

void compInputDisplay(int a)
{
    if (a == 1)
    {
        cout << "Computer played Rock\n";
    }
    else if (a == 2)
    {
        cout << "Computer played Paper\n";
    }
    else
    {
        cout << "Computer played Scissor\n";
    }
}

int main()
{
    /*
        1--->Rock
        2---> Paper
        3---> Scissor
        */
    string user_name;
    int r;
    cout << "Enter user name\n";
    cin >> user_name;

    cout << "Welcome " << user_name << ",\n How many rounds do you want in the game?\n";
    cin >> r;

    int round_count = 1;
    int compScore = 0;
    int userScore = 0;

    for (int i = 0; i < r; i++)
    {

        int userInput;
        cout << "Play your "  << " move "<< round_count<<endl;
        cin >> userInput; // Player's Move

        userInputDisplay(userInput);
        int compInput = 0 + (rand() % 3); // Computer's Move
        compInputDisplay(compInput);

        if (compInput > userInput && compInput - userInput == 1)
        {
            compScore++;
            cout << "Computer Wins round " << round_count << endl
                 << endl;
        }
        else if (compInput > userInput && compInput - userInput == 2)
        {
            userScore++;
            cout << user_name << " Wins round " << round_count << endl
                 << endl;
        }
        else if (compInput==userInput)
        {
            
            cout <<" Round is draw "<< endl
                 << endl;
        }
        else
        {
            userScore++;
            cout << user_name << " Wins round " << round_count << endl
                 << endl;
        }

        cout << "Score stats of round " << round_count << " are:\n";
        cout << user_name << " Score = " << userScore << endl;
        cout << " Computer Score = " << compScore << endl
             << endl;

        if (i < r - 1)
        {
            cout << "Moving on to the next round...\n\n";
        }
        else if(i==r-1)
        {
            cout << "Now the final round\n\n";
        }

        round_count++;
    }

    int diff = abs(compScore - userScore);

    if (userScore > compScore)
    {
        cout << user_name << " Wins the game by " << diff << " points!!!\n\n";
    }
    else if (userScore < compScore)
    {
        cout << "Computer Wins the game by " << diff << " points\n Better Luck next time :-)\n\n";
    }
    else
    {
        cout << "It's a draw\n\n";
    }

    cout << "Final Scores are as follows\n";
    cout << user_name << " Score = " << userScore << endl;
    cout << " Computer Score = " << compScore << endl;

    return 0;
}
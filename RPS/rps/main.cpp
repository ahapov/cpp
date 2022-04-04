// hello, let's play rock paper scissors with PC
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
//
void pcChoice(int &);
void userChoice(int &);
void showChoices( int,int);
void champ(int, int);
// main
int main()
{
    int pc_choice = 0;
    int u_choice = 0;

    srand(time(0));

    pcChoice(pc_choice);


    userChoice(u_choice);

    showChoices(pc_choice, u_choice);

    champ(pc_choice, u_choice);

    return 0;
}


//

void pcChoice(int & pc_choice)
{
    const int MAX_VALUE = 3;
    const int MIN_VALUE = 1;

    pc_choice = (rand()%(MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE);
}

void userChoice (int & u_choice)
{
    int choice;

    cout << "\nMenu\n";
    cout << "1- Rock\n";
    cout << "2- Paper\n";
    cout << "3- Scissors\n";
    cout << "Let's see:\n";
    cin >> choice;

    while(choice < 1 || choice > 3)
    {
        cout << "Invalid choice.\n";
        cout << "\nMenu\n";
        cout << "1- Rock\n";
        cout << "2- Paper\n";
        cout << "3- Scissors\n";
        cout << "Let's see!:\n";
        cin >> choice;
    }

    u_choice = choice;
}

 void  showChoices(int  pc_choice,int  u_choice)
{

       cout << "\nComputer Picked:" << pc_choice << endl;
       cout << "\nYou Picked:" << u_choice << endl;

}

 void champ( int  pc_choice, int  u_choice)
 {
     if(u_choice == pc_choice)
         cout << "DRAW!\n";

    if(u_choice == ROCK)
    {
        if(pc_choice == PAPER)
            cout << "PC WINS!\n";
        else if(pc_choice == SCISSORS)
            cout << "YOU WIN!";
    }
    else if(u_choice == PAPER)
    {
        if(pc_choice == SCISSORS)
            cout << "PC WINS!\n";
        else if(pc_choice == ROCK)
            cout << "YOU WIN!";
    }
    else if(u_choice == SCISSORS)
    {
        if(pc_choice == PAPER)
            cout << "YOU WIN!\n";
        else if(pc_choice == ROCK)
            cout << "PC WINS!";
    }
    else
        cout << "Please try again...\n";
 }



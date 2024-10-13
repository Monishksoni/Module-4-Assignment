#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;
class Game 
{
    private:
        string player_name;
        int round;
        int player_score = 0, computer_score = 0;
        int player_choice;
    public:
    void getName() 
	{
        cout << "Enter The Player Name: ";
        cin >> player_name;
    }
    void setRounds() 
	{
        cout << "\nHow Many Rounds Do You Want To Play? ";
        cin >> round;
    }
    int generateComputerChoice() 
	{
        return (rand() % 3) + 1;
    }
    void getPlayerChoice() 
	{
        cout << "1) ROCK " << endl;
        cout << "2) PAPER" << endl;
        cout << "3) SCISSOR" << endl;
        cout << "Choose Your Choice : "<< endl;
        cin >> player_choice;
    }
    string getScoreName(int choice) 
	{
        switch (choice) 
		{
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissor";
            default:
                return "Invalid";
        }
    }

    void playGame() 
	{
        for (int i=1;i<=round;i++)
		{
            cout << "\nRound NO : " << i<<"/"<<round << endl;
            cout<< player_name << "score = " << player_score <<endl;
            cout<< "computer_score = " << computer_score <<endl;
            getPlayerChoice();
            int computer_choice = generateComputerChoice();
            cout << player_name << " chose: " << getScoreName(player_choice) << endl;
            cout << "Computer chose: " << getScoreName(computer_choice) << endl;

            if (player_choice == computer_choice) 
			{
                cout << "DRAW" << endl;
            } 
			else if ((player_choice == 1 && computer_choice == 3) ||
                       (player_choice == 2 && computer_choice == 1) ||
                       (player_choice == 3 && computer_choice == 2)) 
			{
                cout << player_name << " wins this round!" << endl;
                player_score++;
            } 
			else 
			{
                cout << "Computer wins this round!" << endl;
                computer_score++;
            }
        }

        cout << "\nFinal Score:" << endl;
        cout << player_name << ": " << player_score << endl;
        cout << "Computer: " << computer_score << endl;

        if (player_score > computer_score) 
		{
            cout << player_name << " wins the game!" << endl;
        } else if (player_score < computer_score) 
		{
            cout << "Computer wins the game!" << endl;
        } 
		else 
		{
            cout << "DRAW" << endl;
        }
    }
};

int main() 
{
    srand(time(0));
    Game g1;
    g1.getName();
    g1.setRounds();
    g1.playGame();
    return 0;
}


/*#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	string player_name;
	int round,i;
	cout<<"\n enter your name : ";
	cin>>player_name;
	cout<<"\n how many round you want to play ? :";
	cin>>round;
	int computer_score=0,player_score=0;
	for(i=1;i<=round;i++)
	{
		int player_choice,computer_choice;
		cout<<"\n round number := "<< i << endl;
		cout<< player_name << "score  = " <<player_score <<endl;
		cout<<"compuer score = " <<computer_score << endl;
		cout<< "1. Rock" << endl;
		cout<< "2. Paper" << endl;
		cout<< "3. Scissor" << endl;
		
		do{
			cout<<" select your choice : ";
		    cin>>player_choice;
		}while(player_choice !=1 && player_choice!=2 && player_choice!=3);
	
		srand(time(0));
		computer_choice = (rand()%3)+1;
		if(player_choice == 1 && computer_choice ==3)
		{
			cout<< "player win " << endl;
			player_choice++;
		}
		else if(player_choice ==2 && computer_choice == 1)
		{
			cout<< "player win "<< endl;
			player_choice++;
		}
		else if(player_choice == 3 && computer_choice == 2)
		{
			cout<< "player win ";
			player_choice++;
		}
		else if(player_choice == computer_choice)
		{
			cout<< "draw " <<endl;
		}
		else 
		{
			cout<< "computer win" << endl;
			computer_choice++;
		}	
	}
	if(computer_score == player_score)
	{
		cout<<" game is drawn" <<endl;
	}
	else if(player_score > computer_score)
	{
		cout<<player_name<< "won the game " <<endl;
	}
	else
	{
		cout<<"computer won the game "<<endl;
	}
	return 0;
}*/




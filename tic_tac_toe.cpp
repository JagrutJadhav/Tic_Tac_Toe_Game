////////////////////////////////////////////////////////////////////
//Discrete Events Dynamic Systems Project
//Project to illustrate the use of Finite State Machine(FSM) for game development.
//Developer - Jagrut Jadhav
//    _____ ___ ___   _____ _   ___   _____ ___  ___ 
//   |_   _|_ _/ __| |_   _/_\ / __| |_   _/ _ \| __|
//     | |  | | (__    | |/ _ \ (__    | || (_) | _| 
//     |_| |___\___|   |_/_/ \_\___|   |_| \___/|___|
//                                                   
//////////////////////////////////////////////////////////////////// 

#include <iostream>
#include <string.h>
using namespace std;

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};
char player;
string player_X , player_O;
int count = 1, input;
string state = "input_name", inp;
int win;

void draw_grid();		//Function to draw grid
int win_check();		//Function to check if the win condition is satisfied
char player_toggle(int cnt);		//Function to toggle player X and 0
void usr_inputs();		//Function to get the user inputs for the grid and insert X or 0 accordingly


int main()
{
 while(1)
 {
	switch(state)
	{
		case "input_name" : {
			cout << "Enter Player X name" << endl;
			cin >> player_X;
			cout << "Enter Player O name" << endl;
			cin >> player_O;
			
			state = "player_toggle";
			break;
		}
		case "player_toggle" : {
			player = player_toggle(count);
			if (player == 'X')
			state = "X_input";
			else if (player == 'O')
			state = "O_input";
			break;
			}
		case "X_input" : {
			usr_inputs();
			state = "win_condition" ;
        		break;
			}
		case "O_input" : {
			usr_inputs();
			state = "win_condition" ;
        		break;
			}
		case "win_condition" : {
			win = win_check();
			count++;
			
			if(win == -1)
				state = "player_toggle";
			else if (count > 5)
				state = "game_dec";
			else 
				state = "win_condition" ;
			break;
        		}
		
		case "game_dec" : {
			draw_grid();
			if(win ==1)
        		cout<<"==>\aPlayer "<< player <<" win " << endl;
    			else
        		cout<<"==>\aGame draw" << endl;
			
			cout << "Do you want to continue with the new game? Y or N" << endl;
			cin >> inp;
			if (inp == 'Y' || inp == 'y')
			{
				for (int j = 0 ; j <= 9; j++)
				{
					grid[j] = '0' + j ;
					
					
				}
				state = "input_name";
				count = 1;
			}
			else if (inp == 'N' || inp == 'n')
				return 0;
    			cin.ignore();
    			cin.get();
    			//return 0;
        		}
	
	}
	}
	
}

void draw_grid()
{
	cout << "\033c";
	cout << "-----------------------------------------------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Welcome " << player_X << " and " << player_O<<"to TIC TAC TOE game" <<endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Please press the number to put X and O in the grid" << endl << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "  "<<grid[1]<<" " << "|" << "  "<<grid[2]<<" " << "|" << "  "<<grid[3]<<" "<< endl;
	cout << "----" << "+" << "----" << "+" << "----"<< endl;
	cout << "  "<<grid[4]<<" " << "|" << "  "<<grid[5]<<" " << "|" << "  "<<grid[6]<<" "<< endl;
	cout << "----" << "+" << "----" << "+" << "----"<< endl;
	cout << "  "<<grid[7]<<" " << "|" << "  "<<grid[8]<<" " << "|" << "  "<<grid[9]<<" "<< endl;
	
}

int win_check()
{
    if (grid[1] == grid[2] && grid[2] == grid[3])

        return 1;
    else if (grid[4] == grid[5] && grid[5] == grid[6])

        return 1;
    else if (grid[7] == grid[8] && grid[8] == grid[9])

        return 1;
    else if (grid[1] == grid[4] && grid[4] == grid[7])

        return 1;
    else if (grid[2] == grid[5] && grid[5] == grid[8])

        return 1;
    else if (grid[3] == grid[6] && grid[6] == grid[9])

        return 1;
    else if (grid[1] == grid[5] && grid[5] == grid[9])

        return 1;
    else if (grid[3] == grid[5] && grid[5] == grid[7])

        return 1;
    else if (grid[1] != '1' && grid[2] != '2' && grid[3] != '3' 
                    && grid[4] != '4' && grid[5] != '5' && grid[6] != '6' 
                  && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')

        return 0;
    else
        return -1;
}

char player_toggle(int cnt)
{
	if (cnt%2 == 1)
	{
		draw_grid();
		cout << player_X <<"'s turn. Put 'X' in the GRID" << endl;
		return 'X';
	}
	if (cnt%2 == 0)
	{
		draw_grid();
		cout << player_O <<"'s turn. Put 'O' in the GRID" << endl;
		return 'O';
	}
}

void usr_inputs()
{
	cin >> input;
			
	if (input == 1 && grid[1] == '1')

        grid[1] = player;
        else if (input== 2 && grid[2] == '2')

        grid[2] = player;
        else if (input == 3 && grid[3] == '3')

        grid[3] = player;
        else if (input == 4 && grid[4] == '4')

        grid[4] = player;
        else if (input == 5 && grid[5] == '5')

        grid[5] = player;
        else if (input == 6 && grid[6] == '6')

        grid[6] = player;
        else if (input == 7 && grid[7] == '7')
	
        grid[7] = player;
        else if (input == 8 && grid[8] == '8')

        grid[8] = player;
        else if (input == 9 && grid[9] == '9')

        grid[9] = player;
        else
        {
        cout<<"Invalid move ";
        count--;
        cin.ignore();
        cin.get();
        }
}



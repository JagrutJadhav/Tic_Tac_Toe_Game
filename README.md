# Tic_Tac_Toe_Game
The goal of this work is to explore applications of Finite State Machines in the gaming industries. Tic Tac Toe is one such game that can be implemented using FSM, and which I have designed a program for. The study of FSM in software industries used for developing an algorithm for all the actions related to the game using FSM. The whole game is implemented using C++ on Ubuntu 18.4. The report also showcases the code with all the explanation.

## The Finite State Machine 
To design the state machine we will use modules described above as our states. The inputs will be the keyboard or the condition defined in program. The output of the FSM is the game status which prints the winner or the drawn match. The flow of the game starts with user names. The program initiates the module "input name" to get the names of the players playing the game. After getting both the names of the player, the transition is enabled to the next state when enter is pressed. The player toggle module redirects to the next state "X input" or "0 input" based on the counter flag. The counter increments after the transition is made. X input and 0 input stores replace the grid location with the respective values of X and 0 when the location number is entered. The numeric input transitions to the next state to determine the winning condition. The module "win condition" goes through all the condition in the grid and compares the location number with the win condition. If the condition is satisfied then the state machine transitions to the next state is where the game decides the winner. The transition to the "game decision" occurs when the previous state "win condition" returns "1". Else it checks for the counter value. If the counteris not zero and the condition is not met, it returns -1. In case the counter points to 0, the module returns 0 to indicate the match is a draw. After the game, the user is given the choice to exit the game or to play a new game by entering 'Y' or 'N'. The detailed state diagram is given in the diagram below.

![](Images/TTT.png)

## Game GUI
To run the game we need to compile the c++ file and build the executable for the game. The first requirement for any c++ project is the installation of GNU C/C++ compiler. The installation for "gcc" can be found in multiple resources. The advantage of the code developed by us is that we don't need to install any such library in order to run the code. After installing the GNU compiler on Linux, open terminal and migrate to the path where our project file is saved using "cd" command in Linux. The project can be compiled using the command "g++ -o project name.cpp". Thefile name for our project is tic_tac_toe.cpp.

![](Images/code_compile.PNG)

After writing the command and pressing enter, the compiler automatically generates an executable file for the game naming a.out. To execute the file in terminal we write
"./a.out" which will bring us inside our first state of the state machine. The game will ask for the player names.

![](Images/player_name.PNG)

After entering the names inside the terminal the game starts by asking the first player to enter the number of the location on the grid where he wants to put X.

![](Images/gui.PNG)

The players can go on playing until the conditions satisfy and the game decides the winner or else the game draws.

![](Images/game_dec.PNG)

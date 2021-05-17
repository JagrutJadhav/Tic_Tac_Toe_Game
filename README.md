# Tic_Tac_Toe_Game
The goal of this work is to explore applications of Finite State Machines in the gaming industries. Tic Tac Toe is one such game that can be implemented using FSM, and which I have designed a program for. The study of FSM in software industries used for developing an algorithm for all the actions related to the game using FSM. The whole game is implemented using C++ on Ubuntu 18.4. The report also showcases the code with all the explanation.

## The Finite State Machine 
To design the state machine we will use modules described above as our states. The inputs will be the keyboard or the condition defined in program. The output of the FSM is the game status which prints the winner or the drawn match. The flow of the game starts with user names. The program initiates the module "input name" to get the names of the players playing the game. After getting both the names of the player, the transition is enabled to the next state when enter is pressed. The player toggle module redirects to the next state "X input" or "0 input" based on the counter flag. The counter increments after the transition is made. The given below is the State Table.


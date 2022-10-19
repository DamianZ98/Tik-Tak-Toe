#include <iostream>
#include <vector>
#include <algorithm>


// Greeting message at start of game
void greet(){
	std::cout << "\t\t====================================\n\n";
	std::cout << "\t\tWelcome to the Tik-Tak-Toe Game,\n";
	std::cout << "\t\tAim of the game is quite simple,\n";
	std::cout << "\t\tTry and get 3 in a row, vertically,\n";
	std::cout << "\t\thorizontally, diagnally. First person\n";
	std::cout << "\t\tto get that wins the game. Remember\n";
	std::cout << "\t\tto bring a friend with you!\n\n";
	std::cout << "\t\t====================================\n";

}

// Creates a grid with numbers in between for user to choose which board to select.
void grid(std::vector<char>board){
    std::cout << "\n\t\t===================\n";
	std::cout << "\t\t|  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<"  |\n";
	std::cout << "\t\t-------------------\n";
    std::cout << "\t\t|  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<"  |\n";
	std::cout << "\t\t-------------------\n";
    std::cout << "\t\t|  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<"  |\n";
    std::cout << "\t\t===================\n\n";
}

// Gameplay, Taken in turns allowing the user to enter a board number and replace with their symbol.
void gameplay(int moves,int i,int position, std::vector<char>x){

	while(moves != 0){

		std::vector<int> usedpositon = {};

		std::cout << "\tPlayer " << i << " turn!\n";
		std::cout << "\tenter position : ";
		std::cin >> position;

		/*
		
		if(position == std::count(usedpositon.begin(),usedpositon.end(),position)){
			std::cout << "\n\nSorry Kurwa value already used...\n\n";
			moves++;
		} else 
		
		*/
		
		// player 1 OR player 2 selects an integer between 1-9
		if(i == 1){
			if(position == 1){
				usedpositon.push_back(position);
				x[0] = 'X';
			} else if(position == 2){
				x[1] = 'X';
				usedpositon.push_back(position);
			} else if(position == 3){
				x[2] = 'X';
				usedpositon.push_back(position);
			} else if(position == 4){
				x[3] = 'X';
				usedpositon.push_back(position);
			} else if(position == 5){
				x[4] = 'X';
				usedpositon.push_back(position);
			} else if(position == 6){
				x[5] = 'X';
				usedpositon.push_back(position);
			} else if(position == 7){
				x[6] = 'X';
				usedpositon.push_back(position);
			} else if(position == 8){
				x[7] = 'X';
				usedpositon.push_back(position);
			} else if(position == 9){
				x[8] = 'X';
				usedpositon.push_back(position);
			}
		} else if(i == 2){
			if(position == 1){
				x[0] = 'O';
				usedpositon.push_back(position);
			} else if(position == 2){
				x[1] = 'O';
				usedpositon.push_back(position);
			} else if(position == 3){
				x[2] = 'O';
				usedpositon.push_back(position);
			} else if(position == 4){
				x[3] = 'O';
				usedpositon.push_back(position);
			} else if(position == 5){
				x[4] = 'O';
				usedpositon.push_back(position);
			} else if(position == 6){
				x[5] = 'O';
				usedpositon.push_back(position);
			} else if(position == 7){
				x[6] = 'O';
				usedpositon.push_back(position);
			} else if(position == 8){
				x[7] = 'O';
				usedpositon.push_back(position);
			} else if(position == 9){
				x[8] = 'O';
				usedpositon.push_back(position);
			}
		}
		
		if(x[0] == 'X' && x[1] == 'X' && x[2] == 'X'){ // PLAYER 1 WINS
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[3] == 'X' && x[4] == 'X' && x[5] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[6] == 'X' && x[7] == 'X' && x[8] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[0] == 'X' && x[3] == 'X' && x[6] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[1] == 'X' && x[4] == 'X' && x[7] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[2] == 'X' && x[5] == 'X' && x[8] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[0] == 'X' && x[4] == 'X' && x[8] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[2] == 'X' && x[4] == 'X' && x[6] == 'X'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[0] == 'O' && x[1] == 'O' && x[2] == 'O'){ // PLAYER 2 WINS
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[3] == 'O' && x[4] == 'O' && x[5] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[6] == 'O' && x[7] == 'O' && x[8] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[0] == 'O' && x[3] == 'O' && x[6] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[1] == 'O' && x[4] == 'O' && x[7] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[2] == 'O' && x[5] == 'O' && x[8] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[0] == 'O' && x[4] == 'O' && x[8] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else if(x[2] == 'O' && x[4] == 'O' && x[6] == 'O'){
			grid(x);
			std::cout << "\tPLAYER " << i << " WINS!!!\n";
			break;
		} else {
			// CONTINUES WITH GAME IF NO PLAY HAS 3 IN A ROW. ALSO THIS PART OF CODE LOOPS SO THAT BOTH PLAYERS GET A MOVE EACH THEN RESETS.
			moves--;
			if(i >= 2){
				i = 1;
			} else {
				i++;
			}

			for(int j = 0; j > usedpositon.size();j++){
				std::cout << usedpositon[j] << " ";
			}
			std::cout << "\n";
			std::cout << "\n\n////////////////////////////////////////////////\n\n";
			grid(x);
		}

		if(moves == 0){
			grid(x);
			std::cout << "\tLooks like its a draw! GG";
			break;
		}
	}
}
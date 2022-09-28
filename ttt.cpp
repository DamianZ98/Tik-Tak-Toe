// Tik-Tak-Toe Game
// Damian Zajac 27.09.22

#include <iostream>
#include <vector>
#include <stdlib.h>
#include "ttt_functions.h"

int main(){

	// Variables
	std::vector<char> x ={'1','2','3','4','5','6','7','8','9'};
	int position = 0;
	bool game = true;
	int moves = 9, i;
	char decision;
	// Greeting Function
	greet();
	
	while(game){
		// Generates Random number
		srand(time(NULL));
		int v1 = rand() % 2 + 1;
		i = v1;
		
		// Display the grid
		grid(x);
		// Gameplay
		gameplay(moves,i,position,x);

		std::cout << "\n\tWould you like to play again?(y/n) : ";
		std::cin>> decision;
		if(decision == 'y'){
			continue;
		} else if(decision == 'n'){
			return 0;
		} else {
			std::cout << "\tSorry that was an invalid input. Game will resume.";
			continue;
		}
	}
}
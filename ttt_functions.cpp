#include <iostream>

void greet(){
	std::cout << "\n\n-------------------------------------------------------------\n";
	std::cout << "Hello user, Welcome to the Tik-Tak-Toe Game!\n";
	std::cout << "The objective is quite simple, place 3 'X' or 'O' in a line\n";
	std::cout << "It's a 2 player game, so bring your friend along!\n";
	std::cout << "-------------------------------------------------------------\n\n";

	std::cout << "||-----------||\n";
	std::cout << "|| 1 | 2 | 3 ||\n";
	std::cout << "||---|---|---||\n";
	std::cout << "|| 4 | 5 | 6 ||\n";
	std::cout << "||---|---|---||\n";
	std::cout << "|| 7 | 8 | 9 ||\n";
	std::cout << "||-----------||\n\n";

	std::cout << "-------------------------------------------------------------\n";
	std::cout << "You will have to type in the value corresponding the tile\n";
	std::cout << "where you'd want to place your 'X' or 'O'\n";
	std::cout << "-------------------------------------------------------------\n\n";
}

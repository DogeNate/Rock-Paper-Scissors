#include <stdio.h>     
#include <stdlib.h>   
#include <time.h> 
#include <iostream>

int main() {
	int random;
	int pick;
	char choice;

	srand(time(NULL));
	random = rand() % 3 + 1;

	std::cout << "************** Rock Paper Scissors **************\n";

	do {
		std::cout << "Choose you wepon\n";
		std::cout << "1 = Rock\n";
		std::cout << "2 = Paper\n";
		std::cout << "3 = Scissors\n";
		std::cout << "Enter you choice here: ";
		std::cin >> pick;
		if (random == 1) {
			//This is the rock section
			if (pick == 2) {
				std::cout << "You won because the computer picked rock!\n";
			}
			else if (pick == 3) {
				std::cout << "You lost because the computer picked rock\n";
			}
			else if (pick == 1) {
				std::cout << "We tied!\n";
			}
			else {
				std::cout << "Next time pick the number that corresponds to the wepon.\n";
			}
			//This is the rock section
		}
		else if (random == 2) {
			//This is the papper section
			if (pick == 3) {
				std::cout << "You won because the computer picked paper\n";
			}
			else if (pick == 1) {
				std::cout << "You lost because the computer picked papper\n";
			}
			else if (pick == 2) {
				std::cout << "We tied!";
			}
			else {
				std::cout << "Next time pick the number that corresponds to the wepon.\n";
			}
			//This is the papper section
		}
		else if (random == 3) {
			//this is the scissors section
			if (pick == 1) {
				std::cout << "You won becuase the computer picked scissors\n";
			}
			else if (pick == 2) {
				std::cout << "You lost becasue the computer picked scissors\n";
			}
			else if (pick == 3) {
				std::cout << "We tied!\n";
			}
			else {
				std::cout << "Next time pick the number that corresponds to the wepon.\n";
			}
			//this is the scissors section
		}
		std::cout << "Do you want to play again? (Type Y or N)\n";
		std::cin >> choice;
	} while (choice == 'Y');
	std::cout << "*************************************************";
	return 0;
}

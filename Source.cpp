//rock paper scissor game you choose rock paper or scissor and the computer picks and a winner is decided


#include <iostream>
#include <cstdlib> 
#include <ctime> 

//allow user to chose a option from the menu 

void displayMenu() {
	std::cout << " Welcome to RPS! Choose an option below to compete with the computer " << std::endl;

	std::cout << " 1. Rock"<<std::endl;
	std::cout << " 2. Paper"<<std::endl;
	std::cout << " 3. Scissors"<<std::endl;
	std::cout << " 4. Quit"<<std::endl;
}
//allow choice 

std::string getChoicename(int choice) {
	switch (choice) {
	case 1: return "Rock";
	case 2: return "Paper";
	case 3: return "Scissor";
	case 4: return "Restart";
	}
}
int main(){
	std::srand(static_cast<unsigned int>(std::time(0)));
	int userchoice, computerchoice;

	while (true) {
		displayMenu();
		std::cout << " Enter your choice 1,2,3,4: " << std::endl;

		std::cin >> userchoice;
		//computer if you won, lost, or tied/ 
		if (userchoice == 4) {
			std::cout << " Start over";
		}
		computerchoice = std::rand() % 3 + 1;
		std::cout << "Computer Chose:";
		if (userchoice == computerchoice) {
			std::cout << " Its a tie try again!";
		}
		else if ((userchoice == 1 && computerchoice == 3) ||
			(userchoice == 2 && computerchoice == 1) ||
			(userchoice == 3 && computerchoice == 2)) {
			std::cout << " You won way to go!";
		}
		else if (userchoice >= 1 && userchoice <= 3) {
			std::cout << " Computer Won!";
		}
		else {
			std::cout << " Choice N/A try again please!";
		}
		std::cout << "\n";

	}
	return 0;


}

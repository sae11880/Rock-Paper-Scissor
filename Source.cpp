//rock paper scissor game you choose rock paper or scissor and the computer picks and a winner is decided


#include <iostream>
#include <cstdlib> 
#include <ctime> 
 
std::string PlayersName();
void updateWinCount(int &winCount);


//allow user to chose a option from the menu
void displayMenu() {
	std::cout << " Welcome to RPS! Choose an option below to compete with the computer " << std::endl;

	std::cout << " 1. Rock  "<<std::endl;
	std::cout << " 2. Paper  "<<std::endl;
	std::cout << " 3. Scissors  "<<std::endl;
	std::cout << " 4. Quit  "<<std::endl;
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
	int userchoice, computerchoice, winCount=0;
	std::string playername = PlayersName();

	while (true) {
		displayMenu();
		std::cout << " Enter your choice 1,2,3,4: " << std::endl;

		std::cin >> userchoice;
		//computer if you won, lost, or tied/ 
		if (userchoice == 4) {
			std::cout << " Game Overrrrr  "<<std::endl;
			std::cout << "You won " << winCount << " times";
			break;
		}
		computerchoice = std::rand() % 3 + 1;
		std::cout << "Computer Chose:" << getChoicename(computerchoice) << std::endl;
		
		
		if (userchoice == computerchoice) {
			std::cout << " Its a tie try again!";
		}
		else if ((userchoice == 1 && computerchoice == 3) ||
			(userchoice == 2 && computerchoice == 1) ||
			(userchoice == 3 && computerchoice == 2)) {
			std::cout << " You won way to go!";
			updateWinCount(winCount);
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

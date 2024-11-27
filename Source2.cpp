#include <string> 
#include <iostream> 

std::string PlayersName() { 
	std::string playerName; 
	std::cout << "Enter your name: ";
	std::cin >> playerName; return playerName; } 

void updateWinCount(int& winCount) {
	winCount++;
	std::cout << "You won " << winCount << " times.\n";
}

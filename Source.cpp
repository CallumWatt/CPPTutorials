
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	int rolls = 0; //declaring variables
	int input = 1;
	int sixes = 0;
	int roll = 0;
	int avg = 0;
	while (input != 0) { //start of loop
		srand(time(0));
		roll = rand() % 6 + 1; //generates random number
		rolls = rolls + 1; //counts total rolls
		if (roll == 6) { //finds if six is rolled then adds to count
			sixes = sixes + 1; 
		}

		std::cout << roll << " ";
		std::cout << rolls << " ";
		std::cout << sixes << " ";
		std::cout << "Please enter a positve number, or enter 0 to exit: ";
		std::cin >> input; //finds user input to continue program
	}
	avg = rolls / sixes; // finds the average rolls to sixes
	std::cout << "Number of rolls: " << rolls << "\n"; //displays numbers
	std::cout << "Number of sixes: " << sixes << "\n";
	std::cout << "Average no of rolls to sixes: " << avg << "\n";


}

#include <iostream>
#include <random>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int guessInput(int counter)
{
	int guess{};	
	
	while(true)
	{
		std::cout << "Guess #" << counter << ": ";
		std::cin >> guess;
		// && !((guess>=1)&&(guess<=100))
		if(!std::cin || !((guess>=1)&&(guess<=100)))
		{
			std::cin.clear();
			ignoreLine();
			std::cerr << "Input a valid number from 1 to 100.\n";
		}
		else
		{
			ignoreLine();
			return guess;
		}
	}
}

int main()
{
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; // get 8 integers of random numbers from std::random_device for our seed
	std::mt19937 mt{ ss }; // initialize our Mersenne Twister with the std::seed_seq

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution random_gen{ 1, 100 };

	int random_number{},guess{};
	int counter{};
	char choice{};

	do{
		random_number = random_gen(mt);
		counter = 1;

		std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";
		do
		{
			guess = guessInput(counter);
			
			if(guess>random_number)
				std::cout << "Your guess is too high.\n";
			else if(guess<random_number)
				std::cout << "Your guess is too low.\n";
			else
				std::cout << "Correct! You win!\n";	
			
			if(counter==7)
				std::cout << "Sorry, you lose. The correct number was " << random_number << '\n';
			
			counter++;			
		}while(guess!=random_number&&counter<=7);
		
		std::cout << "Would you like to play again (y/n)? ";
		std::cin >> choice;
	}while(choice=='y');

	return 0;
}
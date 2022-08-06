//use -std=c++20

#include <iostream>
#include <string_view>

enum class Animal
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
};

constexpr std::string_view getAnimalName(Animal animal);
void printNumberOfLegs(Animal animal);

int main()
{
	printNumberOfLegs(Animal::cat);
	printNumberOfLegs(Animal::chicken);
	return 0;
}

constexpr std::string_view getAnimalName(Animal animal)
{
	using enum Animal;
	
	switch(animal)
	{
		case pig: 		return "pig";
		case chicken: 	return "chicken";
		case goat: 		return "goat";
		case cat: 		return "cat";
		case dog: 		return "dog";
		case duck: 		return "duck";
		default:		return "???";
	}
}

void printNumberOfLegs(Animal animal)
{
	using enum Animal;
	
	std::cout << "A " << getAnimalName(animal) << " has ";
	
	switch(animal)
	{
		case duck: 		
		case chicken: 	
			std::cout << "2";
			break;
		case goat: 		
		case cat: 		
		case dog: 		
		case pig:
			std::cout << "4";
			break;
		default:
			std::cout << "???";
			break;
	}
	
	std::cout << " legs.\n";
}
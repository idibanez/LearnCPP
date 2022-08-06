#include <iostream>

namespace Animals
{
	enum Animals
	{
		chicken,
		dog,
		cat,
		elephant,
		duck,
		snake,
		max_animals
	};
}

int main()
{
	//Quiz 1
	double highTemp[365]{0.0};	// highest temperature for each day in a year
	
	//Quiz 2
	int legsOfAnimal[Animals::max_animals]{2, 4, 4, 4, 2, 0};
	
	std::cout << "An elephant has " << legsOfAnimal[Animals::elephant] << " legs.\n";
	
	return 0;
}
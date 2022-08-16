#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int size{};
	std::cout << "How many names would you like to enter? ";
	std::cin >> size;
	
	std::string* names{ new std::string[size]{} };
	
	std::string temp{};
	for(int i = 0; i < size; i++)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::getline(std::cin >> std::ws, temp);
		
		names[i] = temp;
	}
	
	std::sort(names, names + size);
	
	std::cout << "\nHere is your sorted list:\n";
	for(int i = 0; i < size; i++)
	{
		std::cout << "Name #" << i + 1 << ": " << names[i] << "\n";
	}
	
	delete[] names;
	
	return 0;
}
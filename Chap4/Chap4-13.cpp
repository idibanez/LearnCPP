#include <iostream>
#include <string>

int main()
{
	std::string full_name{};
	std::cout << "Enter your full name: ";
	std::getline(std::cin >> std::ws, full_name);
	
	unsigned int age{};
	std::cout << "Enter your age: ";
	std::cin >> age;
	
	std::cout << "Your age + length of name is: " << full_name.length() + age;
	
	return 0;
}
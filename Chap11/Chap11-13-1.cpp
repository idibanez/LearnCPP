#include <iostream>
#include <string>
#include <string_view>

int main()
{
	constexpr std::string_view names[]{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
	std::string choice{};
	
	std::cout << "Enter a name: ";
	std::cin >> choice;
	
	for(const auto name : names)
	{
		if(choice == name)
		{
			std::cout << choice << " was found.\n";
			return 0;
		}
		
	}
	
	std::cout << choice << " was not found.\n";
	
	return -1;
}
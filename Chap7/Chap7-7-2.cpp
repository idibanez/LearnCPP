#include <iostream>

int main()
{
	char alphabet{'a'};
	while(alphabet<='z')
	{
		std::cout << static_cast<int>(alphabet) << " " << alphabet << '\n';
		alphabet++;
	}
	
	return 0;
}
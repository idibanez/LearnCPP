#include <iostream>

int main()
{
	int i{0};
	while(i<5)
	{
		int j{5-i};
		while(j>0)
		{
			std::cout << j << " ";
			j--;
		}
		
		i++;
		std::cout << '\n';
	}
	
	return 0;
}
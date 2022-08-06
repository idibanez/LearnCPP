#include <iostream>

int main()
{
	int i{1};
	while(i<=5)
	{
		int j{5-i},k{i};
		while(j>0)
		{
			std::cout << " " << " ";
			j--;
		}
		while(k>0)
		{
			std::cout << k << " ";
			k--;
		}
		
		i++;
		std::cout << '\n';
	}
	
	return 0;
}
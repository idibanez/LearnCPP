#include <iostream>

int sumTo(int value)
{
	int sum{0};
	for(;value>0;value--)
		sum+=value;
	
	return sum;
}

int main()
{
	int value;
	std::cout << "Enter a number: ";
	std::cin >> value;
	
	std::cout << "Sum of values from 1 to " << value << " is " << sumTo(value);	
	
	return 0;
}
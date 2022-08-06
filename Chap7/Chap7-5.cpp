#include <iostream>

void calculate()
{
	int x{}, y{}, result{};
	char operation{};
	bool success = true;
	
	std::cout << "Enter value for x:\t";
	std::cin >> x;
	
	std::cout << "Enter value for y:\t";
	std::cin >> y;
	
	std::cout << "Enter operation: (+, -, *, /, %):\t";
	std::cin >> operation;
	
	switch(operation)
	{
		case '+':
			result = x+y;
			break;
		case '-':
			result = x-y;
			break;
		case '*':
			result = x*y;
			break;
		case '/':
			result = x/y;
			break;
		case '%':
			result = x%y;
			break;
		default:
			std::cerr << "Invalid input.\n";
			success = false;
			break;
	}
	
	if(success)
	{
		std::cout << "Result of " << x << operation << y << " is " << result << '\n';
	}
}

int main()
{
	calculate();
	
	return 0;
}
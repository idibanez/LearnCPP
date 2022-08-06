#include <iostream>

struct Fraction
{
	int numerator {};
	int denominator {1};
};

Fraction getFraction()
{
	Fraction fraction;
	
	std::cout << "Enter a value for the numerator: ";
	std::cin >> fraction.numerator;
	
	int temp{};
	while(temp == 0)
	{
		std::cout << "Enter a value for the denominator: ";
		std::cin >> temp;
		
		if(temp == 0)
		{
			std::cerr << "Denominator cannot be zero.\n";
		}
	}
	
	std::cout << "\n";
	
	fraction.denominator = temp;
	
	return fraction;
}

// no simplification
Fraction multFraction(const Fraction& a, const Fraction& b)
{
	return {a.numerator * b.numerator, a.denominator * b.denominator};
}

void printFraction(const Fraction& fraction)
{
	std::cout << fraction.numerator << "/" << fraction.denominator;
}

int main()
{
	Fraction a{getFraction()};
	Fraction b{getFraction()};
	
	std::cout << "Your fractions multiplied together: ";
	printFraction(multFraction(a, b));
	std::cout << "\n";
	
	return 0;
}
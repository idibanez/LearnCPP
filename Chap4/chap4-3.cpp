#include <iostream>

int main(){
	double a{},b{},result{};
	char operation{};
	
	std::cout<< "Enter a double value:\t";
	std::cin>>a;
	
	std::cout<< "Enter a double value:\t";
	std::cin>>b;
	
	std::cout<< "Enter one of the following: +, -, *, or /:\t";
	std::cin>>operation;
	
	if(operation=='+'){
		result = a+b;
	}else if(operation=='-'){
		result = a-b;
	}else if(operation=='*'){
		result = a*b;
	}else if(operation=='/'){
		result = a/b;
	}else{
		std::cerr << "Invalid operator.\n";
		return 0;
	}
	
	std::cout<< a << " " << operation << " " << b << " is " << result;

	return 0;
}
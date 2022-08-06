#include <iostream>

int readNumber(){
	int int_input{};
	
	std::cout<<"\nEnter an integer:\t";
	std::cin>>int_input;
	return int_input;
}

void writeAnswer(int output){
	std::cout<<"\nThe sum is "<<output<<".\n";
}

int main(){
	int x{readNumber()};
	int y{readNumber()};
	
	writeAnswer(x+y);
	
	return 0;
}
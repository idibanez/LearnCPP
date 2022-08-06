#include "ex3_io.h"
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
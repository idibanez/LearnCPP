#include <iostream>
#include <cmath>

int getUserInput(){
	
	int input{};
	
	std::cout << "Enter a number from 0 to 255:\t";
	std::cin>>input;
	
	if(input>255 || input<0){
		
		std::cout << "Number is not from 0 to 255. Setting 255 instead.\n";
		return 255;
	}
	
	return input;
}

void getBinary(int input){
	
	std::cout << "The binary form of " << input << " is:\t";
	
	for(int n{7}; n >= 0; n--){
		
		if(static_cast<int>(pow(2,n)) <= input){
		
			std::cout << 1;
			input -= static_cast<int>(pow(2,n));
		}
		else{
			
			std::cout << 0;
		}
		
	}
}

int main(){
	
	int input{getUserInput()};
	getBinary(input);
	
	return 0;
}
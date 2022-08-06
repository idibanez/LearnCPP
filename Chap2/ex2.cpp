#include <iostream>

int readNumber();
void writeAnswer(int output);

int main(){
	int x{readNumber()};
	int y{readNumber()};
	
	writeAnswer(x+y);
	
	return 0;
}
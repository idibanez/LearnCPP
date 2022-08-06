#include <iostream>

int main(){
   std::cout << "Hello world!\n";
   std::cout<< "Please enter an integer:\t";
   
   int input{}; //this is an initialization to zero
   
   std::cin >> input;
   std::cout << "\nYou entered " << input <<".\n";
   
   std::cout<< "\nThe square of " << input << " is " << input*input << ".\n";
   
   return 0;
}
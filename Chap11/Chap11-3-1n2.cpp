// -std=c++17
#include <iostream>
#include <iterator>
#include <limits>

int main()
{
    // Quiz 1
    constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

    for(int i{0}; i < std::size(array); i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
    
    // Quiz 2
    int num_choice{0};
    while (num_choice < 1 || num_choice > 9)
    {
        std::cout << "Enter a number between 1 to 9: ";
        std::cin >> num_choice;

        // if the user entered something invalid
        if (std::cin.fail())
        {
            std::cin.clear(); // reset any error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer
            num_choice = 0;
        }
    }
    
    std::cout << "The number " << num_choice << " has index ";

    for(int i{0}; i < std::size(array); i++)
    {
        if(array[i] == num_choice)
        {
            std::cout << i << ".\n";
            break;
        }
    }

    return 0;
}
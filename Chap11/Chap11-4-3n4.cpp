// Bubble Sort with slight optimizations (early break)
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	constexpr int length{ static_cast<int>(std::size(array)) };

    for (int i = 0; i < length - 1; i++)
    {
        bool swapped = false;

        // print array for each sorting iteration 
        std::cout << i << ": ";
        for (int j = 0; j < length; j++)
        {
            std::cout << array[j] << " ";   
        }
        std::cout << "\n";
        
        for(int j = 0; j < length - 1 - i; j++)
        {
            // compare current element and next element
            // swap if current element is larger than next
            if (array[j] > array[j+1])
            {
                std::swap(array[j],array[j+1]);
                swapped = true;
            }
        }

        // checks if swapped. if no swap, that means list is already sorted
        if(!swapped)
        {
            break;
        }
    }

    return 0;
}
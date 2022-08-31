#include <iostream>
#include <array>
#include <numeric>

enum Items
{
	item_health_potion,
	item_torch,
	item_arrow,
	max_items
};

using inventory_t = std::array<int, Items::max_items>;

int countTotalItems(const inventory_t& items)
{
	return std::reduce(items.begin(), items.end());
}

int main()
{
	inventory_t items{2, 5, 10};
	
	std::cout << "The player has a total of " << countTotalItems(items) << " items.\n";
	
	return 0;
}
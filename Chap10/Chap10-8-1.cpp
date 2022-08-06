#include <iostream>

struct Advertising
{
	int adsShown{}; // number of ads shown
	double adClickedPercent{}; // percentage of ads that were clicked by users
	double adClickedEarnings{}; //average earned for each ad clicked
};

// obtain input from user for ad
Advertising getAd()
{
	Advertising temp;
	
	std::cout << "Number of ads shown: ";
	std::cin >> temp.adsShown;
	std::cout << "Percent of clicked ads: ";
	std::cin >> temp.adClickedPercent;
	std::cout << "Average earnings per ad: ";
	std::cin >> temp.adClickedEarnings;
	
	return temp;
}

void printAd(const Advertising& ad)
{
	std::cout << "\nNumber of ads shown: " << ad.adsShown;
	std::cout << "\nPercent of clicked ads: " << ad.adClickedPercent;
	std::cout << "\nAverage earnings per ad: " << ad.adClickedEarnings;
	
	std::cout << "\n\nTotal Earnings: " << (ad.adsShown * (ad.adClickedPercent / 100)  * ad.adClickedEarnings) << "\n\n";
}

int main()
{
	Advertising ad{ getAd() };
	printAd(ad);
	
	return 0;
}
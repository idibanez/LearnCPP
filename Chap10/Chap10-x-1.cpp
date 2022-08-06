//using -std=c++17
#include <iostream>
#include <string_view>

enum class MonsterType
{
	ogre,
	dragon,
	orc,
	spider,
	slime,
};

struct Monster
{	
	MonsterType type{};
	std::string_view name{""};
	int health{};
};

void printMonster(const Monster& monster)
{
	std::cout << "This ";
	
	switch(monster.type)
	{
		case MonsterType::ogre:
			std::cout << "Ogre";
			break;
		case MonsterType::dragon:
			std::cout << "Dragon";
			break;
		case MonsterType::orc:
			std::cout << "Orc";
			break;
		case MonsterType::spider:
			std::cout << "Great Spider";
			break;
		case MonsterType::slime:
			std::cout << "Slime";
			break;
		default:
			std::cout << "Unfamiliar monster";
			break;
	}
	
	std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre {.type{MonsterType::ogre}, .name{"Torg"}, .health{145}};
	Monster slime {.type{MonsterType::slime}, .name{"Blurp"}, .health{23}};
	
	printMonster(ogre);
	printMonster(slime);
	
	return 0;
}
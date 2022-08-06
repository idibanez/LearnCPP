#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    constexpr std::uint8_t option_viewed{ 0x01 };
    constexpr std::uint8_t option_edited{ 0x02 };
    constexpr std::uint8_t option_favorited{ 0x04 };
    constexpr std::uint8_t option_shared{ 0x08 };
    constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    //ChapO3a
	myArticleFlags |= option_viewed;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
	
	//ChapO3b
	if(myArticleFlags & option_deleted)
		std::cout << "Article was deleted.\n";
	
	//ChapO3c
	myArticleFlags &= ~option_favorited;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}

#include <iostream>

unsigned short int getPositiveHeight() 
{
	int height;
	while (true)
	{
		std::cin >> height;
		if ((std::cin.fail()) || (height < 1))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops, try again. Enter positive number:  ";
		}
		else
			return height;
	}
}


int main()
{
	int height, hash = 2, i, j;
	std::cout << "height:  ";
	height = getPositiveHeight();
	for (i = height + 1; i > 1; i--)
	{
		for (j = height + 1 - hash; j > 0; j--)
		{
			std::cout << " ";
		}
		for (j = 0; j < hash; j++ ) {
			std::cout << "#";
		}
		std::cout << '\n';
		hash++;		
	}


	
}

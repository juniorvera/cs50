
#include <iostream>

int main()
{
	const int litersInMinute = 6;
	int time, liters;
    std::cout <<"Hello!\n How long have you shower? Input minutes: ";
	std::cin >> time;
	if (time <= 0) 
	{
		do 
		{
			std::cout << "Retry: ";
			std::cin >> time;
		} while (time <= 0);
	}
	else
	{
		liters = time * litersInMinute;
		std::cout << "You pour out "<<liters<<" liters, when you are in the shower.";
	}

}


// timeToGetChange.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>

using namespace std;

int getCents()
{
	float change;
	while (true)
	{
		cin >> change;
		if (cin.fail() || change < 0 || int(float(change * 100) != float(change * 100)))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Oops, incorrect data. Try again." <<
				"\nHow mach change is owed (in dollars and cents through point).\n";
		}
		else
			return int(change * 100);
	}
}

int main()
{
	int cents, k = 0;
	vector<int> nominal = {25, 10, 5, 1};

    std::cout << "Hi! How much change is owned?\n"; 
	cents = getCents();

	for (int i : nominal)
	{
		while (cents >= i)
		{
			cents = cents - i;
			k++;
		}
		if (cents == 0)
		{
			cout << "\namount of coins:  " << k;
			break;
		}		
	}
}


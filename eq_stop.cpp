#include <iostream>


int main()
{
	int x, y;

	int i = 0;
	while(true)
	{
		std::cin >> x;
		i++;
		if(x == y)
		{
			break;
		}
		else
		{
			std::cin >> y;
			i++;
		}

	}

	std::cout << i << std::endl;
	return 0;
}
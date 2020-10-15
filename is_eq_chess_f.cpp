#include <iostream>


int main()
{
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	if( (x1+y1)%2 == (x2+y2)%2 )
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return 0;
}
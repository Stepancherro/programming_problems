#include <iostream>

int main(int argc, char* argv[])
{
	int x;
	std::cin >> x;
  	int c = x & (x - 1);
	if(c == 0)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}
  	return 0;
}



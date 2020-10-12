#include <iostream>

int main(int argc, char* argv[])
{
	int evens, odds = 0;
	int A, B;
	std::cin >> A >> B;
	for(int i = A; i <= B; ++i)
	{
		if(i % 2 == 0)
		{
			evens+=i;
		}
		else
		{
			odds+=i;
		}
	}
	std::cout << evens - odds << std::endl;

	return 0;
}

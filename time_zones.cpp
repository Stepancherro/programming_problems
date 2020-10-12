#include <iostream>
#include <cmath>

int main(int argv, char* argc[])
{
	setlocale(LC_ALL, "Rus");
	int H, A, B;
	std::cin >> H >> A >> B;

	int answer = (H - A) + B;
	std::cout << answer << std::endl;

	return 0;
}


/*
	int utc0 = H - A;
	int utcB = utc0 + B;
	int answer = utcB;
*/

#include <iostream>
#include <cmath>
int main()
{
    int N;
    int x2, y2;
    std::cin >> N;
    x2 = std::ceil(std::sqrt(N)) * std::ceil(std::sqrt(N));
    y2 = x2 - N;
    if (std::sqrt(y2) - std::floor(std::sqrt(y2)) == 0)
    {
        std::cout << "Yes" << std::endl;
	std::cout << std::sqrt(x2) << "\t" << std::sqrt(y2) << std::endl;
    }
    else
    {
      std::cout << "NO" << std::endl;
    }
    return 0;
}

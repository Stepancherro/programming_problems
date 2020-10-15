#include <iostream>



int main()
{
	int N;
	std::cin >> N;
	int arr[N];

	for(int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}

	int d = arr[1] - arr[0];
	for(int i = 2; i < N; i++)
	{
		if(arr[i] - arr[i-1] == d)
		{
			if(i == N-1)
			{
				std::cout << "Is progression" << std::endl;
			}
			else
			{
				continue;
			}
		}
		else
		{
			std::cout << "Not progression" << std::endl;
			break;
		}

	}
	return 0;
}
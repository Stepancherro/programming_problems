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
	int k = arr[0];
	for(int j = 1; j < N; j++)
	{
		if(arr[j] < k)
		{
			k = arr[j];
		}
		else
		{
			continue;
		}
	}
	std::cout << k << std::endl;
	return 0;
}
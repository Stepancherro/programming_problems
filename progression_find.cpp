#include <iostream>


int main()
{
	int N;

	std::cin >> N;

	double arr[N];
	for(int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	int point = -1;

	for(int i = 0; i < N-2; i++)
	{

		if((arr[i+1] == (arr[i]+arr[i+2]) / 2) && arr[i+1] > arr[i] && arr[i+1] < arr[i+2])
		{
			std::cout << arr[i]<< " "<< arr[i+1] <<" " << arr[i+2] << std::endl;
			point++;
			break;
		}

	}
	if(point == -1){
		std::cout << point  << std::endl;
	}


	return 0;
}
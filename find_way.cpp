#include <iostream>
#include <ctime>



int main()
{
	using namespace std;
	srand(time(NULL));
	int x = 0;
	int y = 0;
	int step = 0;
	int N;
	cout << "N = ";
	cin >> N;

	int map[N][N];
	//заполняем массив
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			map[i][j] = rand() % 10;
		}
	}
	//выводим карту
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout << map[i][j] << " ";
		}
		cout << endl;
	}

	//считаем путь и выводим цифры
	cout << "Way: ";
	cout << map[x][y] << " ";
	step++;

	while(x+1 <= N-1 || y+1 <= N-1)
	{
		if(x+1 == N)
		{
			y+=1;

		}
		else if(y+1 == N)
		{
			x+=1;

		}

		else if(map[x][y+1] >= map[x+1][y])
		{
			y+=1;

		}
		else if(map[x+1][y] >= map[x][y+1])
		{
			x+=1;

		}
		else
		{
			continue;
		}
		cout << map[x][y] << " ";
		step++;
	}
	cout << endl;
	cout << "MAX = "<< N*N << " steps; " << "THIS = " << step << " steps; " << "OPTIMAL = " << 2*N-1 << " steps."<< endl;


	return 0;
}
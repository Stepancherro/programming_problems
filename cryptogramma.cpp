#include <iostream>
#include <fstream>


template< typename T, size_t N >
void m_t_90clock(T(&arr)[N][N])
{
	T tmp[N][N];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			tmp[i][N-j-1] = arr[j][i];
		}
	}
	for(int l = 0; l < N; l++)
	{
		for(int z = 0; z < N; z++)
		{

			arr[l][z] = tmp[l][z];
		}
	}
}


int main()
{
	using namespace std;
	setlocale(LC_ALL,"Russian");

	ifstream imp1("imp1.txt");
	ifstream imp2("imp2.txt");


	const int N = 6;
	string grid[N][N];
	string syms[N][N];

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{

			imp1 >> syms[i][j];
			imp2 >> grid[i][j];
		}
	}

	/*
	string grid[N][N] =
	{
		{"1","0","1","0","1","0"},
		{"1","1","1","1","0","1"},
		{"1","1","0","1","1","1"},
		{"1","0","1","1","0","1"},
		{"1","1","1","1","1","0"},
		{"1","1","1","0","1","1"}
	};
	string syms[N][N] =
	{
		{"Ж","Б","В","У","Н","Р"},
		{"И","Ы","Н","Е","Я","Е"},
		{"К","Х","М","Б","Р","Р"},
		{"О","Г","У","Р","Л","К"},
		{"Т","И","Р","Я","О","О"},
		{"С","Е","Н","Ю","Е","Т"}
	};
	*/

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < N; j++)
		{
			for(int m = 0; m < N; m++)
			{
				if(grid[j][m] == "0")
				{
					cout << syms[j][m];
				}
				else
				{
					continue;
				}
			}
		}

		m_t_90clock(grid);
	}

	cout << endl;

	return 0;
}

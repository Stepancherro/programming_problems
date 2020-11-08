//Максимальное число подряд идущих равных элементов

/*
	1) сравниваем 2 подряд идущих числа , в конце каждой итерации записывая вводимый x в переменную tmp
	2) если находим последовательность, увеличиваем счетчик sc (по умолчанию 1)
	3) если находим несколько последовательностей, то
	   а) записываем первые 2 в tmp_1 и tmp_2 соответственно,
	   б) если >2 то оставляем большее кол-во и повторяем операции пока не введён 0

*/

#include <iostream>

int max_2(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(int argc, char* argv[])
{
	using namespace std;
	int x;
	int sc = 1;
	int tmp_1 = 0;
	int tmp_2 = 0;
	int tmp = 0;

	for(int i = 0;;i++)
	{
		cin >> x;


		if(x == tmp)
		{
			sc+=1;				
			tmp = x;
		}
		else if(x != tmp && sc > 1)
		{
			if(tmp_1 == 0 && tmp_2 == 0)
			{
				tmp_1 = sc;

			}
			else if(tmp_1 != 0 && tmp_2 == 0)
			{
				tmp_2 = sc;
		
			}

			else if(tmp_1 != 0 && tmp_2 != 0)
			{
				tmp_1 = max_2(tmp_1, tmp_2);
				tmp_2 = sc;
			}
			sc = 1;
			tmp = x;
			if(x == 0)
			{
				break;
			}

		}
		else if(x == 0)
		{
			break;
		}
		else
		{

			tmp = x;
		}

	}

	cout << max_2(tmp_1, tmp_2) << endl;
	return 0;
}

/*
В начальный момент в i-ом элементе массива записано число i (всего N элементов).
Каждую секунду числа сдвигаются в следующую ячейку (из i-ой в i+1-ую), а из N-ой - в первую.
Напечатать состояние массива через T секунд.

Во входном файле записаны два числа - N (1<=N<=100) и T (0<=T<=30000).

В выходной файл выведите N чисел - состояние массива через T секунд.

Пример входного файла
5 3

Пример выходного файла
3 4 5 1 2 
*/

#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	using namespace std;
	int N, T;

	ifstream in;
	ofstream out;

	in.open("input.txt");
	out.open("output.txt");

	in >> N >> T;

	int arr[N];
	//заполнение массива
	for(int i = 0; i < N; i++){
		arr[i] = i+1;
	}


	//звдиг вправо
	int tmp;
	for(int i = 0; i < T; ++i)
	{
		tmp = arr[N-1];
		for(int j = 0; j < N; j++)
		{
			arr[N-j-1] = arr[N-j-2];
		}
		arr[0] = tmp;

	}

	//вывод
	for(int i = 0; i < N; i++)
	{
		out << arr[i] << " ";
	}
	return 0;
}

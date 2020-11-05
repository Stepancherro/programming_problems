//Напишите программу, определяющую последнюю цифру числа  a^b^c, где a, b, c – числа типа int, большие нуля.

#include <iostream>


int pow(int x, int y)
{
	int answ = 1;
	for(int i = 0; i < y; i++)
	{
		answ *= x;
	}
	return answ;
}
int main()
{
	using namespace std;

	unsigned int a, b, c;
	cin >> a >> b >> c;


	// основная идея - возводить в степени последние цифры входных чисел, a%10 ^ (b%10 ^ c%10)

	cout << pow(a%10, pow(b%10, c%10)%10)%10 << endl;
	return 0;
}

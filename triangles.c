#include <stdio.h>
#include <wchar.h>
#include <locale.h>



void pram_treug(int h)
{
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < i+1; j++)
		{
			printf("%s", "#");
		}
		printf("\n");
	}
}


void ravnobedr_treu(int h)
{
	for(int i = 0; i < h; i++)
	{
		int p = 0;
		while(p < h-1-i)
		{
			printf("%s", " ");
			p++;
		}

		for(int j = 0; j < 2*i + 1; j++)
		{

			printf("%s", "#");
		}

		printf("\n");
	}

}
int main(int argc, char* argv[])
{
	ravnobedr_treu(50);
	return 0;
}

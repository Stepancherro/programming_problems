#include <iostream>


int sum_of_digits(int x)
{
    int d1, sum = 0;
    while(true)
    {
        if(x / 10 < 1)
	{
	    sum += x;
	    break;
	}
	d1 = x % 10;
	sum += d1;
	x -= d1;
	x /= 10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    int N, K, count = 0;
    std::cin >> N >> K;
    for(int i = 1; i <= N; ++i)
    {
        if(sum_of_digits(i) % K == 0){
	  	    count++;
        }
        else
        {
	        continue;
        }
    }
    std::cout << count << std::endl;
    return 0;
}

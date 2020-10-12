 #include <iostream>

int main(int argc, char* argv[])
{
  int x, d1, sum = 0;
  std::cin >> x;
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
  std::cout << sum << std::endl;
  return 0;
}

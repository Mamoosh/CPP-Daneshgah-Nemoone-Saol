#include <iostream>
#include<conio.h>
using namespace std;

int
power (int num, int n)
{
  int number = num;
  while (n > 1)
    {
      num = num * number;
      n -= 1;
    }
  return num;
}

int
main ()
{
  int num, n;
  cout << "Number :";
  cin >> num;
  cout << "Tavan :";
  cin >> n;

  if (n == 0)
    {
      cout << endl << num << " be tavan " << n << " = 1";
    }
  else if (n < 0)
    {
      cout << endl << num << " be tavan " << n << " = 1/" << power (num, n * -1);
    }
  else
    {
      cout << endl << num << " be tavan " << n << " = " << power (num, n);
    }


  return 0;
}

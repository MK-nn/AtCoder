#include <iostream>
using namespace std;

int main()
{
  int a;
  int sum = 0;

  cin >> a;
  if (a >= 100)
  {
    sum++;
  }

  if (a % 10 != 0)
  {
    sum++;
  }

  if (a % 100 >= 10)
  {
    sum++;
  }

  cout << sum << endl;
  return 0;
}

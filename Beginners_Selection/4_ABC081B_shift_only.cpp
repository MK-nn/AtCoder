#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, j;
  cin >> n;

  bool hasOdd = false;

  int array[n];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  for (j = 0; hasOdd == false; j++)
  {
    for (int k = 0; k < n; k++)
    {
      int hoge = pow(2, j + 1);
      if (array[k] % hoge != 0)
      {
        hasOdd = true;
      }
    }
  }
  cout << j - 1 << endl;
  return 0;
}
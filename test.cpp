#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int i = 2;
  int j = 3;
  for (int k = 1; k > j; k++)
  {
    cout << 5 % (int(pow(i, k))) << endl;
  }
  cout << pow(i, j + 1) << endl;
  return 0;
}
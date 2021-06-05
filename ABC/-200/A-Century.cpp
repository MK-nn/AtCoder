#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int n1 = n / 100;
  if (n % 100 == 0)
  {
    cout << n1 << endl;
  }
  else
  {
    cout << n1 + 1 << endl;
  }
}
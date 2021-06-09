#include <bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  cin >> n;
  // 0s at the begining
  int b = 0;
  // 0s at the end
  int e = 0;
  for (int i = 1; n.substr(i - 1, 1) == "0"; i++)
  {
    b += 1;
  }
  for (int i = 1; n.substr(n.size() - i, 1) == "0"; i++)
  {
    e += 1;
  }
  while (b < e)
  {
    n = '0' + n;
    b++;
  }
  string m = n;
  reverse(n.begin(), n.end());
  if (n == m)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
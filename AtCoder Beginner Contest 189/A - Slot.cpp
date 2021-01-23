#include <bits/stdc++.h>
using namespace std;

int main()
{
  string c1, c2, c3;
  cin >> c1 >> c2 >> c3;

  if (c1 == c2 && c2 == c3)
  {
    cout << "Won" << endl;
  }
  else
  {
    cout << "Lost" << endl;
  }
}

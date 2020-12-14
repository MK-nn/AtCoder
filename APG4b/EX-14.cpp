#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> test(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> test.at(i);
  }
  sort(test.begin(), test.end());
  cout << test.at(2) - test.at(0) << endl;
}

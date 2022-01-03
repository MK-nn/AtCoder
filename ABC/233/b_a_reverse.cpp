#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int l, r;
  string s;
  cin >> l >> r;
  cin >> s;

  string s_1 = s.substr(0, l - 1);
  string s_2 = s.substr(l - 1, r - l + 1);
  string s_3 = s.substr(r);
  reverse(s_2.begin(), s_2.end());

  cout << s_1 << s_2 << s_3 << endl;
}
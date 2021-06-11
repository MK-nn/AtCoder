#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  // u,d,l,r means the num of up, down, left, right
  int u = 0;
  int d = 0;
  int l = 0;
  int r = 0;
  vector<string> vec(h);
  for (int i = 0; i < h; i++)
  {
    cin >> vec.at(i);
  }
  for (int i = 0; i < (w - y); i++)
  {
    if (vec.at(x - 1).substr(y + i, 1) == "#")
    {
      break;
    }
    r++;
  }
  for (int i = 0; i < (y - 1); i++)
  {
    if (vec.at(x - 1).substr(y - 2 - i, 1) == "#")
    {
      break;
    }
    l++;
  }
  for (int i = 0; i < (x - 1); i++)
  {
    if (vec.at(x - 2 - i).substr(y - 1, 1) == "#")
    {
      break;
    }
    u++;
  }
  for (int i = 0; i < (h - x); i++)
  {
    if ((vec.at(x + i).substr(y - 1, 1)) == "#")
    {
      break;
    }
    d++;
  }
  cout << 1 + l + r + u + d << endl;
}
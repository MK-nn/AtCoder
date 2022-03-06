#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  long long count_1 = 1;
  long long count_2 = 1;
  long long count_3 = 1;
  long long count_4 = 1;
  long long count_5 = 1;
  long long count_6 = 1;
  long long count_7 = 1;
  long long count_8 = 1;
  long long count_9 = 1;

  long long new_count_1;
  long long new_count_2;
  long long new_count_3;
  long long new_count_4;
  long long new_count_5;
  long long new_count_6;
  long long new_count_7;
  long long new_count_8;
  long long new_count_9;

  for (int i = 1; i < n; i++)
  {
    new_count_1 = count_1 + count_2;
    new_count_2 = count_1 + count_2 + count_3;
    new_count_3 = count_2 + count_3 + count_4;
    new_count_4 = count_3 + count_4 + count_5;
    new_count_5 = count_4 + count_5 + count_6;
    new_count_6 = count_5 + count_6 + count_7;
    new_count_7 = count_6 + count_7 + count_8;
    new_count_8 = count_7 + count_8 + count_9;
    new_count_9 = count_8 + count_9;

    count_1 = new_count_1;
    count_2 = new_count_2;
    count_3 = new_count_3;
    count_4 = new_count_4;
    count_5 = new_count_5;
    count_6 = new_count_6;
    count_7 = new_count_7;
    count_8 = new_count_8;
    count_9 = new_count_9;
  }

  cout << ((count_1) + (count_2) + (count_3) + (count_4) + (count_5) + (count_6) + (count_7) + (count_8) + (count_9)) % 998244353 << endl;
}
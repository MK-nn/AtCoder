#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> test(N);
  for (int i = 0; i < N; i++)
  {
    cin >> test.at(i);
  }
  int sum = 0;
  // 合計点を出力
  for (int i = 0; i < N; i++)
  {
    sum += test.at(i);
  }
  int average = sum / N;
  for (int k = 0; k < N; k++)
  {
    if (average > test.at(k))
    {
      cout << average - test.at(k) << endl;
    }
    else
    {
      cout << test.at(k) - average << endl;
    }
  }
}

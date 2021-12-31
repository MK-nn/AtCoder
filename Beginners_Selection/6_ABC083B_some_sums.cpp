#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    int sum = sumOfDigits(i);
    if (sum >= a && sum <= b)
    {
      count += i;
    }
  }
  cout << count << endl;
  return 0;
}
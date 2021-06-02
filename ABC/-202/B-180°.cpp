#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  cin >> str;
  // get the size of str
  int str_size = str.size();
  string str_char = "0";
  // 出力
  for (int i = 0; i < str_size; i++)
  {
    str_char = str.substr((str_size - i - 1), 1);
    if (str_char == "6")
    {
      str_char = "9";
      cout << str_char;
    }
    else if (str_char == "9")
    {
      str_char = "6";
      cout << str_char;
    }
    else
    {
      cout << str_char;
    }
  }
  cout << endl;
}
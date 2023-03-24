#include <bits/stdc++.h>

using namespace std;

string conv_base(string n, int baseX, int baseY)
{
  string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int decimal = stoi(n, 0, baseX);
  string converted = "";

  while (decimal % baseY != 0)
  {
    converted += to_string(decimal % baseY);
    decimal -= (decimal % baseY);
    decimal /= baseY;
  }

  reverse(begin(converted), end(converted));
  return converted;
}

int main()
{
  cout << conv_base("FF", 16, 10) << "\n";
  cout << conv_base("FF", 16, 2) << "\n";
  return 0;
}
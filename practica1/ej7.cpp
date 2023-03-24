#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<char> p10 = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  sort(begin(p10), end(p10));

  do
  {
    for (int i = 0; i < p10.size(); ++i)
    {
      cout << p10[i] << " ";
    }
    cout << "\n";
  } while (next_permutation(begin(p10), end(p10)));

  return 0;
}
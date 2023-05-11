#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
      bool ans = true;
      for (int j = 2; j <= sqrt(i); j++)
      {
        if (i % j == 0)
        {
          ans = false;
          break;
        }
      }
      if (ans && i != 1)
      {
        cout << i << "\n";
      }
    }
    cout << "\n";
  }
}

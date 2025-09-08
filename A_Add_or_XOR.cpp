// Problem Link : https://codeforces.com/problemset/problem/2119/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--)
   {
      int a, b, x, y;
      cin >> a >> b >> x >> y;

      if (a > b)
         if(a % 2 != 0 && a == b + 1) cout << y << "\n";
         else cout << -1 << "\n";
      else if (a == b)
         cout << 0 << "\n";
      else
      {
         int cost = 0;
         while (a != b)
         {
            if (a % 2 == 0)
            {
               a++;
               cost += min(x, y);
            }
            else
            {
               a++;
               cost += x;
            }
         }
         cout << cost << "\n";
      }
   }

   return 0;
}
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
      int n, k, p;
      cin >> n >> k >> p;
      if ((k < 0 && -(p * n) > k) || (p * n < k))
         cout << -1 << "\n";
      else
      {
         if (k < 0)
            k = -1 * k;
         int ans = k / p;
         if (k % p != 0)
            ans++;
         cout << ans << "\n";
      }
   }

   return 0;
}
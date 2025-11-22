// Problem Link : https://codeforces.com/problemset/problem/1837/A
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v)                     \
   for (int i = 0; i < v.size(); ++i) \
      cin >> v[i];
#define vec_out(v)                    \
   for (int i = 0; i < v.size(); ++i) \
      cout << v[i] << " ";

int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--)
   {
      int x, k;
      cin >> x >> k;
      if (x % k != 0)
         cout << 1 << "\n"
              << x << "\n";
      else
         cout << 2 << "\n"
              << x - 1 << " " << 1 << "\n";
   }

   return 0;
}
// Problem Link : https://codeforces.com/problemset/problem/2148/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m, x, y; cin >> n >> m >> x >> y;

      vector<int> a(n), b(m);
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < m; i++) cin >> b[i];

      cout << n + m << "\n";
   }
   

   return 0;
}
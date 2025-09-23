// Problem Link : https://codeforces.com/problemset/problem/2139/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      sort(v.begin(), v.end(), greater<int>());

      long long ans = 0;

      for(int i = 0; i < n; i++){
         ans += 1LL * v[i] * max(0, m - i);
      }

      cout << ans << "\n";
   }
   

   return 0;
}
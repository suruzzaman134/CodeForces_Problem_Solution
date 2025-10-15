// Problem Link : https://codeforces.com/contest/2149/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<long long> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());
      long long ans = INT_MIN;
      for(int i = 1; i < n; i += 2){
         ans = max(ans, v[i] - v[i - 1]);
      }

      cout << ans << "\n";

   }
   

   return 0;
}
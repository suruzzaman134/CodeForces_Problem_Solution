// Problem Link : https://codeforces.com/contest/2136/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      map<int, int> mp;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         mp[x]++;
      }

      int ans = 0;

      for(auto [x, y] : mp){
         if(x == 1) ans += y;
         else if(x == y) ans++;
      }

      cout << ans << "\n";
   }
   

   return 0;
}
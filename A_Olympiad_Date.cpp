// Problem Link : https://codeforces.com/contest/2091/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      map<int, int> mp;
      bool flag = false;
      int cnt = 0;
      for(int i = 0; i < n; i++){
         mp[v[i]]++;
         cnt++;
         if(mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[5] >= 1 && mp[3] >= 1){
            flag = true;
            break;
         }
      }
      if(flag) cout << cnt << "\n";
      else cout << 0 << "\n";
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/contest/2149/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      // vector<int> v(n);
      map<int, int> mp;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         mp[x]++;
      }
      int need_convert = 0;
      for(int i = 0; i < k; i++){
         if(!mp.count(i)) need_convert++;
      }

      if(need_convert <= mp[k]) cout << mp[k] << "\n";
      else cout << need_convert << "\n";
   }
   

   return 0;
}

// Problem Link : https://codeforces.com/contest/2154/problem/B
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

      if(n == 2){
         if(v[0] < v[1]) cout << 0 << "\n";
         else cout << 1 << "\n"; 
         continue;
      }

      int max_e = INT_MIN;
      int cnt = 0;
      for(int i = 1; i < n - 1; i += 2){
         max_e = max({max_e, v[i], v[i-1]});
         v[i] = max_e;
         if(i == 1){
            if(v[i] <= v[i-1]) cnt += (v[i - 1] - v[i]) + 1;
            if(i < n && v[i] <= v[i+1]) cnt += (v[i + 1] - v[i]) + 1;
         }else{
            if(i < n && v[i] <= v[i+1]) cnt += (v[i + 1] - v[i]) + 1;
         }
         
      }

      cout << cnt << "\n";
   }
   

   return 0;
}
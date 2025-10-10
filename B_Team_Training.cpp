// Problem Link : https://codeforces.com/contest/2091/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, x; cin >> n >> x;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());

      int cnt = 0;
      int group_size = 1;
      for(int i = n - 1; i >= 0; i--){
         if(v[i] * group_size >= x){
            cnt++;
            group_size = 1;
         }else group_size++;
      }

      cout << cnt << "\n";
   }
   

   return 0;
}
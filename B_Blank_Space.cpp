// Problem Link : https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vi v(n);
      vec_in(v);
      int zero = 0, ans = INT_MIN;
      for(int i = 0; i < n; i++){
         if(v[i] == 1){
            ans = max(ans, zero);
            zero = 0;
         }else zero++;
      }

      ans = max(ans, zero);
      cout << ans << "\n";
   }
   

   return 0;
}
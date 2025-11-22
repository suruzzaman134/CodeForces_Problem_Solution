// Problem Link : https://codeforces.com/problemset/problem/1853/A
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
      int min_dis = INT_MAX;
      for(int i = 1; i < n; i++){
         min_dis = min(min_dis, v[i] - v[i-1]);
      }

      if(min_dis < 0) cout << 0 << "\n";
      else if(min_dis == 0) cout << 1 << "\n";
      else cout << min_dis / 2 + 1 << "\n";

   }
   

   return 0;
}
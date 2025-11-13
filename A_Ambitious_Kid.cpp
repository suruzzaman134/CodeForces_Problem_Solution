// Problem Link : https://codeforces.com/problemset/problem/1866/A
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

   int n; cin >> n;
   vi v(n);
   vec_in(v);
   int ans = INT_MAX;
   for(int i = 0; i < n; i++){
      ans = min(ans, abs(v[i]));
   }

   cout << ans;

   return 0;
}
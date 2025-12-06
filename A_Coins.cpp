// Problem Link : https://codeforces.com/problemset/problem/1814/A
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
      int n, k; cin >> n >> k;

      if(k == 1 || k == n || n % 2 == 0 || (n - k) % 2 == 0) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/problemset/problem/1831/A
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
   while(t--){
      int n; cin >> n;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         cout << n + 1 - x << " ";
      }
      cout << "\n";
      
   }

   return 0;
}
// Problem Link : https://codeforces.com/problemset/problem/1806/A
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
      int sx, sy, dx, dy; cin >> sx >> sy >> dx >> dy;
      if(sy > dy){
         cout << -1 << "\n";
         continue;
      }

      int m = dy - sy;
      sx += m;

      if(sx < dx){
         cout << -1 << "\n";
         continue;
      }

      m += sx - dx;
      cout << m << "\n";
   }
   

   return 0;
}
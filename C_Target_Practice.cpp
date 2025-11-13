// Problem Link : https://codeforces.com/problemset/problem/1873/C
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
      vector<vector<int>> grid = {
         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
         {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
         {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
         {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
         {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
         {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
      };

      int ans = 0;
      vector<vector<char>> v(10, vector<char>(10));
      for(int i = 0; i < 10; i++){
         for(int j = 0; j < 10; j++){
            cin >> v[i][j];
            if(v[i][j] == 'X') ans += grid[i][j];
         }
      }

      cout << ans << endl;

      
   }
   

   return 0;
}
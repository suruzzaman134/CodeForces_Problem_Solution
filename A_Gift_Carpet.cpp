#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m; cin >> n >> m;
      vector<string> v(n);
      for(int i = 0; i < n; i++){
         cin >> v[i];
      }
      string word = "vika";
      int idx = 0;
      for(int r = 0; r < m && idx < 4; r++){
         for(int c = 0; c < n; c++){
            if(v[c][r] == word[idx]){
               idx++;
               break;
            }
         }
      }

      if(idx == 4) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
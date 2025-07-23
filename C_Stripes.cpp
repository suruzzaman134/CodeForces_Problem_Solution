#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      vector<vector<char>> v(8, vector<char>(8));

      for(int i = 0; i < 8; i++){
         for(int j = 0; j < 8; j++){
            cin >> v[i][j];
         }
      }

      bool flag = false;

      for(int i = 0; i < 8; i++){
         for(int j = 0; j < 8; j++){
            if(count(v[i].begin(), v[i].end(), 'R') == 8){
               flag = true;
               break;
            }
         }
      }

      if(flag) cout << 'R' << "\n";
      else cout << 'B' << "\n";
   }
   

   return 0;
}
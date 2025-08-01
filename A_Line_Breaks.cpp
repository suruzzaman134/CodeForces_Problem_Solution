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
      int cnt = 0;
      int len = 0;
      for(int i = 0; i < n; i++){
         if(v[i].size() <= m - len){
            len += v[i].size();
            cnt++;
         }else break;
      }

      cout << cnt;
      cout << "\n";
   }
   

   return 0;
}
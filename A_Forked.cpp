// Problem Link : https://codeforces.com/problemset/problem/1904/A
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b, xk, yk, xq, yq; cin >> a >> b >> xk >> yk >> xq >> yq;

      vector<int> dx = {a, a, -a, -a, b, b, -b, -b};
      vector<int> dy = {-b, b, b, -b, a, -a, a, -a};

      set<pair<int, int>> st1, st2;

      for(int i = 0; i < 8; i++){
         st1.insert({xk+dx[i], yk+dy[i]});
      }

      for(int i = 0; i < 8; i++){
         st2.insert({xq+dx[i], yq+dy[i]});
      }
      int ans = 0;
      for(auto ele: st2){
         if(st1.find(ele) != st1.end()){
            ans++;
         }
      }

      cout << ans << "\n";

   }
   

   return 0;
}
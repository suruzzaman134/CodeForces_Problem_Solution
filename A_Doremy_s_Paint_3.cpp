// Problem Link : https://codeforces.com/problemset/problem/1890/A
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
      int n; cin >> n;
      map<int, int> mp;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         mp[x]++;
      }

      if(mp.size() > 2) cout << "No" << "\n";
      else{
         if(mp.size() == 1){
            cout << "Yes" << "\n";
            continue;
         }
         vector<int> v(2);
         int i = 0;
         for(auto [x, y] : mp){
            v[i++] = y;
         }

         if(abs(v[0] - v[1]) > 1) cout << "No" << "\n";
         else cout << "Yes" << "\n"; 
      }
   }
   

   return 0;
}
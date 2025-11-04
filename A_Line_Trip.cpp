// Problem Link : https://codeforces.com/problemset/problem/1901/A
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
      int n, x; cin >> n >> x;
      vector<int> v(n);
      i_v(n, v);

      int need_gas = v[0];
      if(n > 1){
         for(int i = 0; i < n - 1; i++){
            need_gas = max(need_gas, v[i+1] - v[i]);
         }
      }
      need_gas = max(need_gas, (x - v[n-1]) * 2);
      cout << need_gas << "\n";
   }
   

   return 0;
}
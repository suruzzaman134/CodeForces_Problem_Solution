// Problem Link : https://codeforces.com/problemset/problem/1903/A
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
      int n, k; cin >> n >> k;
      vector<int> v(n);
      i_v(n, v);
      if(k >= 2) cout << "YES" << "\n";
      else{
         bool ok = true;
         for(int i = 1; i < n; i++){
            if(v[i] < v[i-1]){
               ok = false;
               break;
            }
         }
         if(ok) cout << "YES" << "\n";
         else cout << "NO" << "\n";
      }

   }
   


   return 0;
}
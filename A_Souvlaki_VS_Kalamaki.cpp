// Problem Link : https://codeforces.com/contest/2163/problem/A
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      sort(v.begin(), v.end());
      bool ok = true;

      for(int i = 0; i < n; i++){
         if(i % 2 == 1 && i != n - 1){
            if(v[i] != v[i+1]){
               ok = false;
               break;
            }
         }
      }

      if(ok) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
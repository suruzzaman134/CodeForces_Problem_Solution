// Problem Link : https://codeforces.com/contest/1669/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n + 1);
      bool flag = true;
      
      for(int i = 1; i <= n; i++) cin >> v[i];

      int odd_rem = v[1] % 2;
      int even_rem = v[2] % 2;


      for(int i = 1; i <= n; i += 2){
         if(v[i] % 2 != odd_rem){
            flag = false;
            break;
         }
      }

      if(flag){
         for(int i = 2; i <= n; i += 2){
            if(v[i] % 2 != even_rem){
               flag = false;
               break;
            }
         }
      }

      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
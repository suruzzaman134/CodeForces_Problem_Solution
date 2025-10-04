// Problem Link : https://codeforces.com/contest/2123/problem/C
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
      vector<int> pre(n), suf(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      int min = v[0];
      int max = v[n-1];

      for(int i = 0; i < n; i++){
         if(min <= v[i]) pre[i] = min;
         else{
            pre[i] = v[i];
            min = v[i];
         }
      }

      for(int i = n - 1; i >= 0; i--){
         if(max >= v[i]){
             suf[i] = max;
         }
         else{
            suf[i] = v[i];
            max = v[i];
         }
      }

      for(int i = 0; i < n; i++){
         if(v[i] <= pre[i] || v[i] >= suf[i]) cout << 1;
         else cout << 0;
      }
      cout << "\n";


   }
   

   return 0;
}
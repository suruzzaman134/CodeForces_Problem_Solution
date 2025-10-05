// Problem Link : https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;

      
      long long ans = k + ((k - 1) / (n - 1));
      cout << ans << "\n";
      
   }
   

   return 0;
}
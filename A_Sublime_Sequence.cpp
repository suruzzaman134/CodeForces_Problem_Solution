// Problem Link : https://codeforces.com/problemset/problem/2148/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, n; cin >> x >> n;
      if(n % 2) cout << x << "\n";
      else cout << 0 << "\n";
   }
   

   return 0;
}
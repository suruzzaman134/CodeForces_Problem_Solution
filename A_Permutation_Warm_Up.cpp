// Problem Link : https://codeforces.com/problemset/problem/2108/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;

      int max_i = (n * n) / 2;
      int cnt = 0;
      for(int i = 0; i <= max_i; i+=2) cnt++;
      cout << cnt << "\n";
   }
   

   return 0;
}
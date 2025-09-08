// Problem Link : https://codeforces.com/problemset/problem/2118/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;

      int one = 1;
      for(int i = 0; i < n - k; i++){
         cout << 0;
      }
      for(int i = 0; i < k; i++) cout << 1;
      cout << "\n";
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/contest/2149/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      int zero = 0;
      int minus_one = 0;
      while (n--)
      {
         int x; cin >> x;
         if(x == 0) zero++;
         else if(x == -1) minus_one++;
      }

      cout << ((minus_one % 2) * 2) + zero << "\n";
      
   }
   

   return 0;
}
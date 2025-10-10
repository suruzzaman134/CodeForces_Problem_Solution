// Problem Link : https://codeforces.com/contest/2091/problem/C
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      if(!(n % 2)) cout << -1 << "\n";
      else{
         int num = 1;
         for(int i = 0; i < n; i++){
            if(num > n) num -= n;
            cout << num << " ";
            num += 2;
         }
         cout << "\n";
      } 
   }
   

   return 0;
}
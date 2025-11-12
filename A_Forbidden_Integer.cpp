// Problem Link : https://codeforces.com/problemset/problem/1845/A
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k, x; cin >> n >> k >> x;

      if(k == 1 && x == 1) cout << "NO" << "\n";
      else if(x != 1){
         cout << "YES" << "\n";
         cout << n << "\n";
         for(int i = 1; i <= n; i++) cout << 1 << " ";
         cout << "\n";
      }else{
         if(n % 2 == 0){
            cout << "YES" << "\n";
            cout << n / 2 << "\n";
            for(int i = 1; i <= n / 2; i++) cout << 2 << " ";
            cout << "\n";
         }else if(k > 2){
            cout << "YES" << "\n";
            cout << (n - 1) / 2 << "\n";
            cout << 3 << " ";
            for(int i = 1; i < (n - 1) / 2; i++) cout << 2 << " ";
            cout << "\n";
         }else cout << "NO" << "\n";
      }
   }
   

   return 0;
}
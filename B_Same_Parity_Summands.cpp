// Problem Link : https://codeforces.com/contest/1352/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      // if(n < k){
      //    cout << "NO" << "\n";
      //    return 0;
      // }
      int rem = (n - (k - 1));
      if(rem % 2 != 0 && rem > 0){
         cout << "YES" << "\n";
         for(int i = 1; i <= k - 1; i++) cout << 1 << " ";
         cout << rem << "\n";
      }else{
         if((rem - (k - 1)) % 2 == 0 && rem - (k - 1) > 0){
            cout << "YES" << "\n";
            for(int i = 1; i <= k - 1; i++) cout << 2 << " ";
            cout << rem - (k - 1) << "\n";
         }else{
            cout << "NO" << "\n";
         }
      }
   }
   

   return 0;
}
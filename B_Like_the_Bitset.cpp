// Problem Link : https://codeforces.com/contest/2136/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      string s; cin >> s;
      int one = 0;
      int consecutive_one = 0;
      bool bad = false;
      for(char ch: s){
         if(ch == '1'){
            one++;
            consecutive_one++;
         }else{
            consecutive_one = 0;
         }

         if(consecutive_one >=k){
            bad = true;
            break;;
         }
      }

      if(bad){
         cout << "NO" << "\n";
         continue;
      }

      int zero = one + 1;
      one = 1;
      cout << "YES" << "\n";
      for(char ch: s){
         if(ch == '1'){
            cout << one << " ";
            one++;
         }else{
            cout << zero << " ";
            zero++;
         }
      }
         cout << "\n";


   }
   

   return 0;
}
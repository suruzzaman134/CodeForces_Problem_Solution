// Problem Link : https://codeforces.com/problemset/problem/1913/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      string s; cin >> s;
      int n = s.size(), one = 0, zero = 0;
      for(char ch: s){
         if(ch == '0') zero++;
         else one++;
      }

      
      for(char ch: s){
         if(ch == '1' && zero > 0) zero--;
         else if(ch == '0' && one > 0) one--;
         else break;
      }


      cout << one + zero << "\n";

      
   }
   

   return 0;
}
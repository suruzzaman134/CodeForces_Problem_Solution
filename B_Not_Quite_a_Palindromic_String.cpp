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
      int zero = 0, one = 0;
      int g_pair = 0;
      for(char ch : s){
         if(ch == '0') zero++;
         else one++;
      }

      int min_pr = (max(zero, one) - min(zero, one))/ 2;
      

      if(k < min_pr) cout << "NO" << "\n";
      else if((k - min_pr) % 2 == 0) cout << "YES" << "\n";
      else cout << "NO" << "\n";

   }
   

   return 0;
}
// https://codeforces.com/problemset/problem/2132/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      long long n; cin >> n;

      long long power = 10;
      vector<long long> ans;

      while (power <= n)
      {
         long long d = power + 1;
         if(n % d == 0){
            ans.push_back(n / d);
         }

         if(power > 1e18 / 10) break;

         power *= 10;
      }

      sort(ans.begin(), ans.end());

      if(ans.empty()) cout << 0 << "\n";
      else{
         cout << ans.size() << "\n";
         for(long long x : ans) cout << x << " ";
         cout << "\n";
      }
      
   }
   

   return 0;
}
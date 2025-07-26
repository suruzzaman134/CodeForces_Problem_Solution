#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, k; cin >> n >> k;
      int ans = 0;

      if(n % 2){
         n = n - k;
         ans++;
      }

      ans += n / (k - 1);
      if(n % (k - 1) != 0) ans++;

      cout << ans << "\n";
   }
   

   return 0;
}
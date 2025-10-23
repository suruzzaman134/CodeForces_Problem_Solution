#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];

      sort(v.begin(), v.end());
      int ans = INT_MIN;
      int idx = 1;
      int curr_sum = 0;
      for(int i = n - 1; i >= 0; i--){
         curr_sum += v[i];
         ans = max(ans, curr_sum / idx);
         idx++;
      }

      cout << ans << "\n";
   }
   

   return 0;
}
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
      int cnt = 0;

      for(int i = 0; i < n - 1; i++){
         if(v[i+1] - v[i] > 1) cnt++;
      }

      if(cnt >= 1) cout << "NO" << "\n";
      else cout << "YES" << "\n";
   }
   

   return 0;
}
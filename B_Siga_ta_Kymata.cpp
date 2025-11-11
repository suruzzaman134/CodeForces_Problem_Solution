// Problem Link : https://codeforces.com/contest/2163/problem/B
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
      int mn = 0, mx = 0;
      for(int i = 0; i < n; i++){
         cin >> v[i];
         if(v[i] < v[mn]) mn = i;
         if(v[i] > v[mx]) mx = i;
      }

      string s; cin >> s;

      if(s[0] == '1' || s[n-1] == '1'){
         cout << -1 << "\n";
         continue;
      }
      if(s[mn] == '1' || s[mx] == '1'){
         cout << -1 << "\n";
         continue;
      }

      
      cout << 5 << "\n";
      cout << 1 << " " << mn+1 << "\n";
      cout << 1 << " " << mx+1 << "\n";
      cout << mn+1 << " " << n << "\n";
      cout << mx+1 << " " << n << "\n";
      cout << min(mn, mx) + 1 << " " << max(mn, mx) + 1 << "\n";
   }


   return 0;
}
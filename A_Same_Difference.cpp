#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;

      map<char, int> mp;
      for(char ch: s) mp[ch]++;
      int ans = 0;
      for(auto [x, y] : mp){
         if(x == s[n-1]) continue;
         else ans += y;
      }

      cout << ans << "\n";
   }
   

   return 0;
}
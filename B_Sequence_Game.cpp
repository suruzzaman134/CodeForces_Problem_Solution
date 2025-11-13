// Problem Link : https://codeforces.com/problemset/problem/1862/B
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
      vi v(n);
      vec_in(v);
      vi ans;
      ans.push_back(v[0]);
      for(int i = 1; i < n; i++){
         if(v[i] < v[i-1]){
            ans.push_back(v[i]);
            ans.push_back(v[i]);
         }
         else ans.push_back(v[i]);
      }

      cout << ans.size() << endl;
      for(int ele : ans) cout << ele << " ";
      cout << endl;
   }
   

   return 0;
}
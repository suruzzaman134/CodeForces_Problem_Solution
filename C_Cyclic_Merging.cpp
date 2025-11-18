// Problem link : https://codeforces.com/contest/2166/problem/C;
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
      vector<pair<int, int>> v(n);
      vector<int> value(n);
      set<int> st;
      for(int i = 0; i < n; i++){
         cin >> v[i].first;
         v[i].second = i;
         value[i] = v[i].first;
         st.insert(i);
      }

      sort(v.begin(), v.end());
      int cost = 0;
      for(auto [val, idx] : v){
         if(st.size() == 1) break;
         auto left = st.lower_bound(idx);
         if(left == st.begin()) left = st.end();
         left--;
         auto right = st.upper_bound(idx);
         if(right == st.end()) right = st.begin();

         int l = *left, r = *right;
         
         cost += min(value[l], value[r]);

         st.erase(idx);

      }

      cout << cost << "\n";
      
      
   }
   

   return 0;
}
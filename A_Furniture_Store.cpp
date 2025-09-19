// Problem Link : https://codeforces.com/problemset/problem/2141/A
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
      vector<int> ans;

      for(int i = 0; i < n; i++) cin >> v[i];
      int p_cost = v[0];
      for(int i = 1; i < n; i++){
         if(p_cost >= v[i]){
            p_cost = v[i];
            continue;
         } 
         ans.push_back(i + 1);
      }

      sort(ans.begin(), ans.end());

      cout << ans.size() << "\n";
      for(int x : ans) cout << x << " ";
      cout << "\n";


   }
   

   return 0;
}
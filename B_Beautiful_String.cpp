// Problem Link : https://codeforces.com/problemset/problem/2162/B
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;

      
      vector<int> ans;

      for(int i = 0; i < n; i++){
         if(s[i] == '1') ans.push_back(i + 1);
      }
      cout << ans.size() << "\n";
      for(int ele: ans) cout << ele << " ";
      cout << "\n";
      
      

   }
   

   return 0;
}
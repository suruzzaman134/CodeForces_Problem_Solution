// Problem Link : https://codeforces.com/problemset/problem/2140/A
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

      string temp = s;

      sort(temp.begin(), temp.end());
      int ans = 0;

      for(int i = 0; i < n; i++) if(temp[i] != s[i]) ans++;

      cout << ans / 2 << "\n";
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/contest/1971/problem/A
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      cout << min(x, y) << " " << max(x, y) << "\n";
   }
   

   return 0;
}
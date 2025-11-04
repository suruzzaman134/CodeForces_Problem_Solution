// Problem Link : https://codeforces.com/problemset/problem/2140/B
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
      long long x; cin >> x;
      if(x%2) cout << x * 2 << "\n";
      else cout << x / 2 << "\n";
   }
   

   return 0;
}
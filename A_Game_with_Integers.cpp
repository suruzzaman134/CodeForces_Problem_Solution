// Problem Link : https://codeforces.com/problemset/problem/1899/A
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
      int n; cin >> n;
      if(n % 3) cout << "First" << "\n";
      else cout << "Second" << "\n";
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/problemset/problem/2148/C
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
      int n, m; cin >> n >> m;
      int points = 0;
      int px = 0, py = 0;
      while (n--)
      {
         int a, b; cin >> a >> b;
         points += a - px;

         if(abs(a - px) % 2 != abs(b - py) % 2) points--;

         px = a;
         py = b;
      }

      if(px != m) points += m - px;

      cout << points << "\n"; 
   }
   

   return 0;
}
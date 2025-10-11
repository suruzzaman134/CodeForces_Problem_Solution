// Problem Link : https://codeforces.com/contest/2091/problem/D
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n, m, k; cin >> n >> m >> k;
      int each_row = ceil((float) k / n);

      

      if(each_row <= (m + 1) / 2) cout << 1 << "\n";
      else if(m % each_row == 1) cout << m / 2 << "\n";
      else cout << each_row - (m % each_row) << "\n";
   }
   

   return 0;
}
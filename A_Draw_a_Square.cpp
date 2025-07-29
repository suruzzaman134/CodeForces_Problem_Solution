#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int l, r, d, t; cin >> l >> r >> d >> t;
      if(l == r && r == d && d == t) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}
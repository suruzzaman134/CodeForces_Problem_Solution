#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b, c; cin >> a >> b >> c;
      if(a + b == c) cout << "YES" << "\n";
      else if(b + c == a) cout << "YES" << "\n";
      else if(c + a == b) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
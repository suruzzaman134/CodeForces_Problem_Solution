#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b, c; cin >> a >> b >> c;

      if(a + b >= 10) cout << "YES" << "\n";
      else if(b + c >= 10) cout << "YES" << "\n";
      else if(c + a >= 10) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
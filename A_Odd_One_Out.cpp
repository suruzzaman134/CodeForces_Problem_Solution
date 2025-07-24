#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int a, b, c; cin >> a >> b >> c;

      if(a == b) cout << c << "\n";
      else if(b == c) cout << a << "\n";
      else cout << b << "\n";
   }
   

   return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int m , n; cin >> m >> n;

      if(m <= 1 || n <= 1 || (n == 2 && m == 2)) cout << "NO" << "\n";
      else cout << "YES" << "\n";
   }
   

   return 0;
}
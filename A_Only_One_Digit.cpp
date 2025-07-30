#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x; cin >> x;
      int min_y = INT_MAX;

      while (x > 0)
      {
         min_y = min(min_y, x % 10);
         x /= 10;
      }

      cout << min_y << "\n";
      
   }
   

   return 0;
}
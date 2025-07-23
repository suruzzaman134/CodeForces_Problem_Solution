#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      map<int, int> idx;

      for(int i = 0; i < n; i++){
         int x; cin >> x;
         idx[x] = i + 1;
      }
      int max_ij = -1;
      for(auto [x, y] : idx){
         for(auto [a, b] : idx){
            if(__gcd(x, a) == 1){
               max_ij = max(max_ij, y + b);
            }
         }
      }

      cout << max_ij << "\n";
      
   }
   

   return 0;
}
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
      
      
         if(n % 2 == 0) cout <<  (n - 2) / 2 << "\n";
         else cout << (n-1) / 2 << "\n";
      
   }
   


   return 0;
}
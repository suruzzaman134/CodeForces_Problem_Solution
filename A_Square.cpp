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
      int a, b, c, d; cin >> a >> b >> c >> d;
      if(a == b && b == c && c == d) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
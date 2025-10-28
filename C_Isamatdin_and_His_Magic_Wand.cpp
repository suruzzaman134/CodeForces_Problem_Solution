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
      vector<int> v(n);
      i_v(n, v);

      bool odd = false, even = false;
      for(int ele: v){
         if(ele % 2 == 0) even = true;
         else odd = true;
      }

      if(odd && even) sort(v.begin(), v.end());

      for(int ele : v) cout << ele << " ";
      cout << "\n";
   }
   

   return 0;
}
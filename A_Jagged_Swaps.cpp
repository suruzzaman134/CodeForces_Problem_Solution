// Problem Link : https://meet.google.com/viq-yzdd-ppc
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

      if(v[0] == 1)  cout << "YES" << "\n";
      else cout << "NO" << "\n";
      
   }
   

   return 0;
}
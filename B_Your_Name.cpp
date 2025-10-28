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
      string a, b; cin >> a >> b;
      map<char, int> mp1, mp2;
      for(char ch: a) mp1[ch]++;
      for(char ch: b) mp2[ch]++;
      bool flag = true;
      for(auto [x, y] : mp1){
         if(mp2[x] != y){
            flag = false;
            break;
         }
      }

      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
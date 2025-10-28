// Problem Link : https://codeforces.com/contest/1971/problem/B
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
      string s; cin >> s;
      bool ok = false;

      for(int i = 0; i < s.size() - 1; i++){
         if(s[i] != s[i+1]){
            ok = true;
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
            break;
         }
      }
      if(ok) cout << "YES" << "\n" << s << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
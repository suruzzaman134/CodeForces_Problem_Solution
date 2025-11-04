// Problem Link : https://codeforces.com/problemset/problem/1900/A
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
      string s; cin >> s;
      bool ok = false;
      int operation_one = 0;
      int cur_empty = 0;
      for(int i = 1; i < n; i++){
         if(s[i] == '.'){
            if(s[i-1] == '.' && i == 1){
                cur_empty += 2;
            }else{
               cur_empty++;
            }
         }else{
            cur_empty = 0;
         }
         // cout << cur_empty << " ";
         if(cur_empty >= 3){
            ok = true;
            break;
         }
      }

      if(ok) cout << 2 << "\n";
      else{
         for(char ch : s) if(ch == '.') operation_one++;
         cout << operation_one << "\n";
      }
   }
   

   return 0;
}
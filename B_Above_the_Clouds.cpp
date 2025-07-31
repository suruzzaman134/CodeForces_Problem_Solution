#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;

      unordered_set<char> st;
      bool flag = false;
      st.insert(s[0]);
      st.insert(s[n-1]);

      for(int i = 1; i < n - 1; i++){
         if(st.find(s[i]) != st.end()){
            flag = true;
            break;
         }
         st.insert(s[i]);
      }

      if(flag) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      unordered_set<int> st;
      bool flag = true;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         if(st.find(x) != st.end()){
            flag = false;
         }
         st.insert(x);
      }

      if(flag) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }


   return 0;
}
// Problem Link : https://codeforces.com/contest/1971/problem/C
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
      int i = a;
      set<int> st;
      while (1)
      {
         st.insert(i);
         if (i == b) break;
         i++;
         if (i == 13) i = 1;
      }


      if((st.count(c) && st.count(d)) || (!st.count(c) && !st.count(d))) cout << "NO" << "\n";
      else cout << "YES" << "\n";
      
   }
   

   return 0;
}
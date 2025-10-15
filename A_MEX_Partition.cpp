// Problem Link : https://codeforces.com/contest/2160/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      set<int> st;
      for(int i = 0; i < n; i++){
         int x; cin >> x;
         st.insert(x);
      }

      if(!st.count(0)){
         cout << 0 << "\n";
      }else{
         bool flag = true;
         int find_element = 0;
         while (flag)
         {
            if(!st.count(++find_element)){
               flag = false;
            }
         }
         
         cout << find_element << "\n";
      }
   }
   

   return 0;
}
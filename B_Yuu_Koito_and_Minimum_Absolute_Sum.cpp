// Problem Link : https://codeforces.com/contest/2171/problem/B
#include <bits/stdc++.h>
using namespace std;


#define int long long
#define endl "\n"
typedef vector<int> vi;
#define vec_in(v) for(int i = 0; i < v.size(); ++i) cin >> v[i];
#define vec_out(v) for(int i = 0; i < v.size(); ++i) cout << v[i] << " " ; 


int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vi v(n);
      vec_in(v);
      bool flag = false;
      if(v[0] == -1 && v[n-1] == -1){
         flag = true;
      }

      if(flag){
         cout << 0 << "\n";
         for(int ele: v) cout << (ele == -1 ? 0 : ele) << " ";
         cout << "\n";
      }else{
         if(v[0] == -1 || v[n-1] == -1) cout << 0 << "\n";
         else cout << abs(v[0] - v[n-1]) << "\n";
         for(int i = 0; i < n; i++){
            if(v[i] == -1){
               if(i == 0) cout << v[n-1] << " ";
               else if(i == n - 1) cout << v[0] << " ";
               else cout << 0 << " ";
            }else cout << v[i] << " "; 
         }
         cout << "\n";
      }
   }
   

   return 0;
}
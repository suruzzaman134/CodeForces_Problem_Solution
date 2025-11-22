// Problem Link : https://codeforces.com/problemset/problem/1857/A
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
      int sum_all_element = accumulate(v.begin(), v.end(), 0);
      int ok = false;
      for(int ele : v){
         int ele2 = sum_all_element - ele;
         if(ele % 2 == ele2 % 2 ){
            ok = true;
            break;
         }
      }

      cout << (ok ? "YES" : "NO") << "\n";
   }
   

   return 0;
}
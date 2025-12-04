// Problem Link : https://codeforces.com/problemset/problem/1834/A
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
      int one = 0, minus_one = 0;
      for(int ele: v){
         if(ele == 1) one++;
         else minus_one++;
      }

      if(one >= minus_one){
         if(minus_one % 2 == 0) cout << 0 << "\n";
         else cout << 1 << "\n";
      }else{
         int need_change = ((one + minus_one + 1) / 2) - one;
         int remain_minus_one = minus_one - need_change;
         if(remain_minus_one % 2 == 0) cout << need_change << "\n";
         else cout << need_change + 1 << "\n";
      }
   }
   

   return 0;
}
// Problem Link : https://codeforces.com/problemset/problem/1859/A
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
      bool ok = true;

      for(int i = 0; i < n - 1; i++){
         if(v[i] != v[i+1]){
            ok = false;
            break;
         }
      }
      sort(v.begin(), v.end());
      if(ok) cout << -1 << "\n";
      else{
         vi p;
         p.push_back(v[0]);
         int i = 1;
         for( ; i < n; i++){
            if(v[i] == v[i-1]) p.push_back(v[i]);
            else break;
         }

         cout << p.size() << " " << n - i << "\n";
         for(int ele: p) cout << ele << " ";
         cout << "\n";
         for(int j = i; j < n; j++) cout << v[j] << " ";
         cout << "\n";
      }
   }


   

   return 0;
}
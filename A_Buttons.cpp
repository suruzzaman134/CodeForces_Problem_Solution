// Problem Link : https://codeforces.com/problemset/problem/1858/A
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
      int a, b, c; cin >> a >> b >> c;
      if(a > b) cout << "First" << "\n";
      else if(b > a) cout << "Second" << "\n";
      else{
         if(c%2) cout << "First" << "\n";
         else cout << "Second" << "\n";
      }
   }
   

   return 0;
}
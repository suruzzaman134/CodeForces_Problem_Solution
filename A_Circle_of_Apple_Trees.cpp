// Problem Link : https://codeforces.com/contest/2153/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];

      sort(v.begin(), v.end());

      int cnt = 1;
      int last_eat = v[0];

      for(int i = 0; i < n; i++){
         if(last_eat < v[i]){
            cnt++;
            last_eat = v[i];
         }
      }

      cout << cnt << "\n";
   }
   

   return 0;
}
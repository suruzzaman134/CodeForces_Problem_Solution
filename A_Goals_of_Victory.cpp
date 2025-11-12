// Problem Link : https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while(t--){
      int n; cin >> n;
      vector<int> v(n);
      for(int i = 0; i < n - 1; i++) cin >> v[i];

      int sum_all = accumulate(v.begin(), v.end(), 0);

      cout << -1 * sum_all << "\n";
   }

   return 0;
}
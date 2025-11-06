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
      int n, x; cin >> n;
      vector<long long> v(n);
      for(int i = 0; i < n; i++) cin >> v[i];
      cin >> x;
      
      long long min_ele = *min_element(v.begin(), v.end());
      long long max_ele = *max_element(v.begin(), v.end());

      if(x >= min_ele && x <= max_ele) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
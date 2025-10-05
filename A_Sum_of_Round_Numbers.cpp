// Problem Link : https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int place_digit = 10;
      vector<int> result;
      int n; cin >> n;
      while (n > 0)
      {
         int current_part = n % place_digit;
         if(current_part != 0) result.push_back(current_part);
         
         n -= current_part;
         place_digit *= 10;
      }
      cout << result.size() << "\n";
      for(int ele: result) cout << ele << " ";
      cout << "\n";
      
   }
   

   return 0;
}
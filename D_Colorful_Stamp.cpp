// Problem Link : https://codeforces.com/contest/1669/problem/D
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;
      vector<string> parts;
      
      string temp = "";
      for(int i = 0; i < n; i++){
         if(s[i] == 'W'){
            if (!temp.empty()) parts.push_back(temp);
            temp = "";
         }else{
            temp += s[i];
         }
      }

      if (!temp.empty()) parts.push_back(temp);
      bool bad = false;
      for(string ele : parts){
         bool has_R = false, has_B = false;
         for(char ch: ele){
            if(ch == 'R') has_R = true;
            if(ch == 'B') has_B = true;
         }
         if(has_B ^ has_R){
            bad = true;
            break;
         }
      }
      if(!bad) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}
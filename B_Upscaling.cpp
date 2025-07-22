#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s1, s2;

      for(int i = 0; i < n; i++){
         if(i % 2 == 0){
            s1 += "##";
            s2 += "..";
         }else{
            s1 += "..";
            s2 += "##";
         }
      }

      s1 += "\n" + s1;
      s2 += "\n" + s2;

      for(int i = 0; i < n; i++){
         if(i % 2 == 0) cout << s1 << "\n";
         else cout << s2 << "\n";
      }
   }
   

   return 0;
}
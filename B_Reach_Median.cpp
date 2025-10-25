// Problem Link : https://codeforces.com/contest/1037/problem/B
#include <bits/stdc++.h>
using namespace std;
int main(){
 int n, m;
 if (!(cin >> n >> m)) {
        return 0;
    }
 
 vector<int> v;
 int temp = n;
 while(temp--){
  int a; cin >> a;
  v.push_back(a);
 }

 sort(v.begin(), v.end());

 int midian_index = v.size() / 2;
 long long operation = abs(v[midian_index] - m);

 for(int i = 0; i < midian_index; i++){
  if(v[i] > m) operation += v[i] - m;
 }

 for(int i = midian_index + 1; i < n; i++){
   if(v[i] < m) operation += m - v[i];
 }

 cout << operation;

 return 0;
}
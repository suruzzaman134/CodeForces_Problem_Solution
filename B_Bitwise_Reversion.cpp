// Problem Link : https://codeforces.com/contest/2153/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int x, y, z;
        cin >> x >> y >> z;

        int a = x | z;
        int b = x | y;
        int c = y | z;

        if((a & b) == x && (b & c) == y && (a & c) == z){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

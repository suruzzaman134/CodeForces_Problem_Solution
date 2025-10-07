// Problem Link : https://codeforces.com/contest/2136/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, a, b, c, d;
    cin >> T;
    while (T--) {
        cin >> a >> b >> c >> d;
        c -= a;
        d -= b;
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);
        cout << (((a + 1) << 1) >= b && ((c + 1) << 1) >= d ? "YES" : "NO") << '\n';
    }
}

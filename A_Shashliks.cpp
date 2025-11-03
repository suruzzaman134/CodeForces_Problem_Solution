// Problem Link : https://codeforces.com/contest/2113/problem/A
#include <bits/stdc++.h>
using namespace std;

int calc(int k, int a, int b, int x, int y) {
    int cnt = 0;
    if (k >= a) {
        int cook1 = (k - a) / x + 1;
        cnt += cook1;
        k -= cook1 * x;
    }
    if (k >= b) {
        int cook2 = (k - b) / y + 1;
        cnt += cook2;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

      
        int ans1 = calc(k, a, b, x, y);
        int ans2 = calc(k, b, a, y, x);

        cout << max(ans1, ans2) << "\n";
    }
    return 0;
}

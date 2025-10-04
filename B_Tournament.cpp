// Problem Link : https://codeforces.com/contest/2123/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        if (k > 1) {
            cout << "YES\n";
        } else {
            int mx = *max_element(v.begin(), v.end());
            if (v[j - 1] == mx)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
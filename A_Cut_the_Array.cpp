// Problem Link : https://codeforces.com/problemset/problem/2144/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long total = accumulate(a.begin(), a.end(), 0LL);

        if(total % 3 == 0) {
            cout << "1 2\n";
        } else {
            cout << "0 0\n";
        }
    }

    return 0;
}

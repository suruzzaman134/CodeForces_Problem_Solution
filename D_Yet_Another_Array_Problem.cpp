#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        vector<long long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

        for (auto x : primes) {
            bool found = false;
            for (auto i : a) {
                if (__gcd(i, x) == 1) {
                    found = true;
                    break;
                }
            }
            if (found) {
                cout << x << '\n';
                break;
            }
        }
    }
    return 0;
}

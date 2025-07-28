#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n, c;
        cin >> n >> c;

        vector<long long> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long x = 1;
        long long answer = 0;


            for (int i = n - 1; i >= 0; --i) {
                if (c >= x * v[i]) {
                    answer++;
                    x *= 2;
                }
            }
            cout << n - answer << '\n';
        
    }

    return 0;
}

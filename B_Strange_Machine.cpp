#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        string s; cin >> s;
        vector<long long> a(q);
        for(int i = 0; i < q; i++) cin >> a[i];

        bool allA = true;
        for(char c : s) if(c == 'B') allA = false;

        for(int i = 0; i < q; i++){
            long long x = a[i];
            if(allA){
               cout << x << "\n";
               continue;
            }
            int cnt = 0, j = 0;
            while(x > 0){
                if(s[j] == 'B') x /= 2;
                else x -= 1;
                cnt++;
                j = (j + 1) % n;
            }
            cout << cnt << "\n";
        }
    }

    return 0;
}

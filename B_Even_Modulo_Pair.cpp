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
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<long long> even, odd;
        for(auto x : a){
            if(x % 2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        bool found = false;

        if(even.size() >= 2){
            cout << even[0] << " " << even[1] << "\n";
            continue;
        }


        if(even.size() == 1){
            long long e = even[0];
            for(auto x : a){
                if(x == e) continue;
                if(x < e && (e % x) % 2 == 0){
                    cout << x << " " << e << "\n";
                    found = true;
                    break;
                }
            }
            if(found) continue;
        }

        sort(odd.begin(), odd.end());
        int m = (int)odd.size();
        for(int i = 0; i < m && !found; i++){
            for(int j = i+1; j < m; j++){
                if((odd[j] % odd[i]) % 2 == 0){
                    cout << odd[i] << " " << odd[j] << "\n";
                    found = true;
                    break;
                }
            }
        }

        if(!found) cout << -1 << "\n";
    }

    return 0;
}

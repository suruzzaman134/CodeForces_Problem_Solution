#include <bits/stdc++.h>
using namespace std;

bool isSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1) return true;
    if (b1 == b2 && b2 == b3 && l1 + l2 + l3 == b1) return true;
    if (b2 == b3 && l2 + l3 == l1 && b1 + b2 == l1) return true;
    if (l2 == l3 && b2 + b3 == b1 && l1 + l2 == b1) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        if (isSquare(l1, b1, l2, b2, l3, b3)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

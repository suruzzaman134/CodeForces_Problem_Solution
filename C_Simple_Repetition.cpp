// Problem Link : https://codeforces.com/contest/2093/problem/C
#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{

    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        long long int x, k;
        cin >> x >> k;

        if (x == 1 && k == 2)
            cout << "YES" << endl;
        else if (k == 1)
        {
            if (isPrime(x))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
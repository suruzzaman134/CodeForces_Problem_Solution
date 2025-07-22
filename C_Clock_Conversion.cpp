#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int hour = stoi(s.substr(0, 2));
        string minute = s.substr(3, 2);

        string period = (hour < 12) ? "AM" : "PM";

        if(hour == 0) hour = 12;       
        else if(hour > 12) hour -= 12;

        string hour_s = (hour < 10 ? "0" : "") + to_string(hour);
        
        cout << hour_s << ":" << minute << " " << period << "\n";
    }

    return 0;
}

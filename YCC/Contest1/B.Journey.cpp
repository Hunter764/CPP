#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<ll> results;

    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll total = a + b + c; 
        ll cycles = n / total; // Number of complete 3-day cycles
        ll r = n % total;

        if (r == 0) {
            results.push_back(cycles * 3);
        } else {
            ll days = cycles * 3;

            if (r <= a) {
                days += 1;
            } else if (r <= a + b) {
                days += 2;
            } else {
                days += 3;
            }

            results.push_back(days);
        }
    }

    for (const auto &res : results) {
        cout << res << "\n";
    }

    return 0;
}

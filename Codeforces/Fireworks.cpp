#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, m;
        cin >> a >> b >> m;
        ll g = gcd(a, b); 
        ll max_fireworks = 0;
        
        for (ll i = 0; i < b; ++i) {
            ll fireworks = 0;
            for (ll j = i; j <= i + m; j += a) {
                if (j % b == 0) {
                    fireworks++;
                }
            }
            max_fireworks = max(max_fireworks, fireworks);
        }
        cout << max_fireworks << endl;
    }
    return 0;
}

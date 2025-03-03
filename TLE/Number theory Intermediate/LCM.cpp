#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return (1LL * a * b) / gcd(a, b); // Prevents overflow
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int res = v[0]; // Initialize with first number
    for (int i = 1; i < n; i++) { // Start from index 1
        res = lcm(res, v[i]); // Compute LCM iteratively
    }

    cout << res << endl;
    return 0;
}

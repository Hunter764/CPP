#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long cnt = 1;
        long long valid = 0;  // Initialize valid to 0 at the beginning of each test case
        for (long long i = 1; i < n; i++) {
            if (v[i] > v[i - 1]) {
                cnt++;
            } else {
                valid += cnt * (cnt + 1) / 2;  // Add the number of valid subsequences
                cnt = 1;  // Reset the subsequence length for a new subsequence
            }
        }
        
        valid += cnt * (cnt + 1) / 2;  // Add the last subsequence
        cout << valid << endl;
    }
    return 0;
}

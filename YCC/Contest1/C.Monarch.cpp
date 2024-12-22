#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        
        vector<bool> known(n + 1, false);
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            known[q] = true;
        }
        
        string result = "";
        for (int i = 0; i < m; ++i) {
            int excluded = a[i];
            bool pass = true;
            for (int q = 1; q <= n; ++q) {
                if (q != excluded && !known[q]) {
                    pass = false;
                    break;
                }
            }
            result += (pass ? '1' : '0');
        }
        
        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

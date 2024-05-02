#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, PB, PS;
        cin >> n >> k >> PB >> PS;
        vector<int> p(n), a(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long scoreB = 0, scoreS = 0;

        for (int i = 0; i < k; ++i) {
            scoreB += a[PB - 1];
            scoreS += a[PS - 1];
            PB = p[PB - 1];
            PS = p[PS - 1];
        }

        if (scoreB > scoreS) {
            cout << "Bodya" << endl;
        } else if (scoreS > scoreB) {
            cout << "Sasha" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}

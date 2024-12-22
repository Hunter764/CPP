#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i]; 
        }

        int diff = 0;

        for (int i = 0; i < n; ++i) {
            int m = 0;
            int s = 0;

            for (int j = i; j < n; ++j) {
                m += a[j];
                if (j + 1 < n) {
                    s += b[j + 1];
                }
                diff = max(diff, m - s);
            }
        }

        cout << diff << endl;
    }

    return 0;
}

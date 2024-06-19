#include <iostream>
#include <vector>
using namespace std;

int GoodPairs(vector<int>& a, int n) {
    int operations = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] % 2) == (a[i + 1] % 2)) {
            operations++;
        }
    }
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = GoodPairs(a, n);

        cout << result << endl;
    }
    return 0;
}

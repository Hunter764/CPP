#include <iostream>
using namespace std;

int func(int n, int m) {
    for (int i = 1; i < n + 1; i++) {
        m = m - i;
        if (m < 0) {
            m = m + i;
            return m;
            break;
        } else if (i == n) {
            return func(n, m);
        }
    }
    return m; // Adding this line to handle the function's return in case no conditions are met
}

int main() {
    int n, m;
    cin >> n >> m;
    int total = m;
    int ans = func(n, m);
    cout << ans << endl;

    return 0;
}

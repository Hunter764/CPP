#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k % 2 != 0) {  //when odd
        cout << "No\n";
        return;
    }

    vector<long long> a(n + 1);
    for (long long i = 1; i <= n; ++i) {
        a[i] = i;
    }

    k /= 2;
    long long x = n - 1;

    // Perform swaps to meet the condition
    for (long long i = 1; i <= n; ++i) {
        if (k <= x) {
            swap(a[i], a[i + k]);
            k = 0;
            break;
        }
        swap(a[i], a[i + x]);
        k -= x;
        x -= 2;

        // If x becomes non-positive, break the loop
        if (x <= 0) {
            break;
        }
    }

    // If k is still greater than 0, it's not possible to meet the condition
    if (k > 0) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
    for (long long i = 1; i <= n; ++i) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

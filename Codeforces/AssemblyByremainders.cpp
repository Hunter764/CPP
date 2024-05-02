#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        // Initialize the array a with all 1s
        vector<int> a(n, 1);

        // Set a[i] = x[i] + 1 for i = 2 to n
        for (int i = 1; i < n; ++i) {
            a[i] = x[i - 1] + 1;
        }

        // Print the array a
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

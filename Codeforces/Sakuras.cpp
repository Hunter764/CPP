#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b; // Read number of 1s and 2s

        // Check if the total sum is even
        if ((a + 2 * b) % 2 != 0) {
            cout << "NO" << endl;
        } else {
            // Check the conditions for balancing
            if (b % 2 == 0 || a > 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool canFormSquareMatrix(int n, const string& s) {
    int k = sqrt(n);
    if (k * k != n) {
        return false;
    }

    // Check the first and last rows
    for (int i = 0; i < k; ++i) {
        if (s[i] != '1' || s[n - 1 - i] != '1') {
            return false;
        }
    }

    // Check the inner rows
    for (int i = 1; i < k - 1; ++i) {
        if (s[i * k] != '1' || s[i * k + k - 1] != '1') {
            return false;
        }
        for (int j = 1; j < k - 1; ++j) {
            if (s[i * k + j] != '0') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Length of the string
        string s;
        cin >> s; // The binary string

        if (canFormSquareMatrix(n, s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
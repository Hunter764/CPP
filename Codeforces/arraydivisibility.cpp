#include <iostream>
using namespace std;

int main() {
    

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                cout << i << "\n";
            } else {
                cout << i << " ";
            }
        }
    }

    return 0;
}


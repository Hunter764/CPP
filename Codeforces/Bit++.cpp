#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // Number of operations
    int x = 0; // Initial value of x

    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation;

        if (operation == "++X" || operation == "X++") {
            ++x;
        } else if (operation == "--X" || operation == "X--") {
            --x;
        }
    }

    cout << x << endl; // Output the final value of x

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_sum = 0;
        int optimal_x = 0;
        for (int x = 2; x <= n; x++) { // Start from x = 2
            int sum = 0;
            int k = 1;
            while (k * x <= n) {
                sum += k * x;
                k++;
            }
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }
        cout << optimal_x << endl;
    }
    return 0;
}


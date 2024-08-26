#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans;
        for (int power = 1; n > 0; n /= 10, power *= 10) {
            if (int digit = n % 10; digit > 0) {
                ans.push_back(digit * power);
            }
        }
        cout << ans.size() << endl;
        for (int num : ans) cout << num << " ";
        cout << endl;
    }
}

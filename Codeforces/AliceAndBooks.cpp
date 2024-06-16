#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void books() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = *max_element(a.begin(), a.end() - 1);
    cout << mx + a[n - 1] << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        books();
    }
    return 0;
}
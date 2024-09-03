#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
        long long jumps = 0;
        while (x > 0 || y > 0) {
            long long dx = min(x, k);
            long long dy = min(y, k);
            if (jumps % 2 == 0) {
                x -= dx;
            } else {
                y -= dy;
            }
            jumps++;
        }
        cout << jumps <<endl;
    }
    return 0;
}
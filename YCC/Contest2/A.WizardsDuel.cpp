#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, p, q;
    cin >> l >> p >> q;

    // Calculate the distance from Harry's position to the second collision
    double distance = (2.0 * p * l) / (p + q);
    double result = distance/2;

    cout << fixed << setprecision(4) << result<< endl;

    return 0;
}

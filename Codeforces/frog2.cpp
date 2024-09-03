#include <iostream>
#include <cmath>

int main() {
    int t; // Number of test cases
    std::cin >> t;

    while (t--) {
        long long x, y, k;
        std::cin >> x >> y >> k;

        long long dx = std::abs(x);
        long long dy = std::abs(y);

        long long jumps_x = dx / k + (dx % k != 0 ? 1 : 0);
        long long jumps_y = dy / k + (dy % k != 0 ? 1 : 0);

        std::cout << jumps_x + jumps_y << std::endl;
    }

    return 0;
}
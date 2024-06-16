#include <iostream>
#include <algorithm>
using namespace std;

void maxProfit()
{
    long long n, a, b;
    cin >> n >> a >> b;

    if (b <= a)
    {
        cout << n * a << endl;
        return;
    }
    if (b - a >= n - 1)
    {
        long long ans = b * (b + 1) / 2 - (b - n) * (b - n + 1) / 2;
        cout << ans << endl;
        return;
    }

    long long ans = b * (b + 1) / 2 - a * (a + 1) / 2;
    n -= (b - a);
    ans += a * n;

    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        maxProfit();
    }
    return 0;
}
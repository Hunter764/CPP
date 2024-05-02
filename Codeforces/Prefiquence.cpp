#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int k = 0; 
        int j = 0; 

        for (int i = 0; i < n; ++i) {
            while (j < m && b[j] != a[i])
                j++;

            if (j == m)
                break;

            k++;
            j++;
        }

        cout << k << endl;
    }

    return 0;
}

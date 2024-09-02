#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int totalTwos = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2)
                totalTwos++;
        }
        
        int prefixTwos = 0;
        bool found = false;
        
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 2)
                prefixTwos++;
            
            int suffixTwos = totalTwos - prefixTwos;
            
            if (prefixTwos == suffixTwos) {
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}

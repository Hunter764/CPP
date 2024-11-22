#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            count++;
        }
    }

    if (count % 2 != 0) {
        cout << "Lucky"<< endl; 
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) { //for(auto &it:arr)cin>>it;
            cin >> arr[i];
        }

        ll result = -1; // Default value if no such `num` is found
        for (int i = 1; i <= 61; i++) {
            ll num = (1LL << i); // 2^i
            unordered_set<ll> st;
            for (int j = 0; j < n; j++) {
                st.insert(arr[j] % num);
            }
            if (st.size() == 2) {
                result = num;
                break; // Exit as we only need the smallest `num`
            }
        }

        cout << result << endl;
    }
    return 0;
}

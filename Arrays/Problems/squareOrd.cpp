#include <iostream>
#include <vector>
#include <cmath> // Include cmath for abs function
#include <algorithm> // Include algorithm for sorting

using namespace std;

void sortedSquareArray(vector<int>& v) {
    vector<int> ans;

    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    
    while (left_ptr <= right_ptr) {
        if (abs(v[left_ptr]) < abs(v[right_ptr])) {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--; // Increment right_ptr
        } else {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }
    
    // Reverse the ans vector since it's filled from the end
    reverse(ans.begin(), ans.end());

    // Print the sorted square array
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortedSquareArray(v);

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void  SortZeroesAndOnes(vector<int>& v) {
    // Counting zeroes
    int zeroes_count = 0;
    for(int ele:v) {
        if(ele == 0) {
            zeroes_count++;
        }
    }
    // Assigning values to the vector
    for(int i = 0; i < v.size(); i++) { // Corrected v.size() function call
        if(i < zeroes_count) {
            v[i] = 0;
        } else {
            v[i] = 1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v; // Dynamic array
    for(int i = 0; i < n; i++) { // Input to take number of elements in the array
        int ele;
        cin >> ele;
        v.push_back(ele); // Pushing elements in the array
    }
    // Sorting zeroes and ones
    SortZeroesAndOnes(v);
    // Loop to print elements of the vector
    for(int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
    cout << endl;
    
    return 0;
}

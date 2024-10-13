#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N; 
    vector<int> A(N);    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    cin >> X;
    int position = -1;
    
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            position = i;
            break;  
        }
    }    
    cout << position << endl;
    
    return 0;
}

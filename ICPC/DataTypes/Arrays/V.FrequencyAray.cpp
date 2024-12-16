
// --> idea

// #include<bits/stdc++.h>
// using namespace std;


//  int countEle(int ele , int Q[] , int n){
//         int count = 0;
//         for(int i=0 ;i<n;i++){
//             if(Q[i] == ele){
//                 count++;
//             }
//         }
//         return count;
//     }

// int main(){
//     int n, m;
//     cin>>n>>m;
//     int Q[n];
//     for(int i=0 ;i<n;i++){
//         cin>>Q[i];
//     }

//     for (auto ele : Q){
//         int count = countEle(ele, Q , n);
//         cout<<ele<<" " <<count <<endl;
        
//     }
//     return 0;
    
// }

// #include<bits/stdc++.h>
// using namespace std;

// void countFreq(int arr[], int n) {
//     vector<bool> visited(n, false); 

//     for (int i = 0; i < n; i++) {
//         // Skip if already visited
//         if (visited[i]) {
//             continue;
//         }

//         int count = 1; // Count the current element
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 visited[j] = true; // Mark as visited
//                 count++;
//             }
//         }
//         cout << arr[i] << " " << count << endl;
//     }
// }
// int main(){
//     int n, m;
//     cin>>n,m;
//     int arr[n];
//     for(int i=0 ;i<n; i++){
//         cin>>arr[i];
//     }
//     countFreq(arr , n);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M; 

    vector<int> freq(M + 1, 0); 

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        freq[num]++; 
    }

    for (int i = 1; i <= M; i++) {
        cout << freq[i] << endl; 
    }

    return 0;
}

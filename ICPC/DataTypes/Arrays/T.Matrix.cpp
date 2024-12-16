// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     int sum1=0;
//     int sum2 =0;
//     int A[N][N];
//     for(int i=0 ;i<N;i++){
//         for(int j =0; j<N;j++){
//             cin>>A[i][j];
//         }
//     }

//     for(int i=0 ;i<N;i++){
//         for(int j=0; j<N;j++){
//             if(i==j){
//                 sum1+=A[i][j];
//             }
//         }
//     }
//     for(int i=0; i<N;i++){
//         for(int  j=0 ;j<N; j++){
//             if(i+j==N-1){
//                 sum2+=A[i][j];
//             }
//         }
//     }
//     int result = abs(sum1-sum2);
//     cout<<result<<endl;
//     return 0;
// }


//time complexity : O(n^2)


// ->Approach 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum1 = 0;
    int sum2 =0;
    
    int arr[n][n];
    for(int i=0 ;i<n;i++){
        for(int j=0 ;j<n; j++){
            int ele;
            cin>>ele;
            if(i==j){
                sum1 += ele;
            }
            if( i+j == n-1){
                sum2 += ele;
            }
        }
    }
    int result = abs(sum1-sum2);
    cout<<result<<endl;
    return 0;
}

//time complexity : O(n^2) -> because we are using two nested loops to traverse the matrix.
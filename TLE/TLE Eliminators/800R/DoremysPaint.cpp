#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0; i<n; i++ ){
//             cin >> a[i];
//         }
        

//         sort(a.begin(),a.end());
//         bool found = false;
    

//     while(true){
//         int k = a[0] + a[1];
//         bool isGood = true;
//         for(int i=1; i<n-1; i++){
//             if(a[i] + a[i+1] !=k){
//                 isGood = false;
//                 break;
//             }
//         }
//         if(isGood){
//             found = true;
//             break;
//         }
//         if(!next_permutation(a.begin(),a.end())){
//             break;
//         }
//     }
//     cout<<(found ? "Yes" : "No")<<endl;
// }
// return 0;
// }


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        bool found = (a[0] + a[n-1] == a[1] + a[n-2]);

        cout<<(found ? "Yes":"No")<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        vector<int> maxValues;

        //check all subarrays

        for(int i=0; i<n; i++){
            int Currentmax = 0;
            for(int j=i; j<n; j++){
                Currentmax = max(Currentmax,arr[j]);
                maxValues.push_back(Currentmax);
            }
        }
        for(int i=0 ;i<maxValues.size(); i++){
            cout<<maxValues[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}


// 2
// 4
// 1 6 3 7
// 3
// 3 1 2

//Output
// 1 6 6 7 6 6 7 3 7 7 
// 3 3 3 1 2 2 
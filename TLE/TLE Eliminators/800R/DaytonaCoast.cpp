#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>> n >> k;
        int count = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++ ){
            cin >> arr[i];
        }
        for(int i =0; i<n; i++){
            if(arr[i]==k){
                count++;
            }
            
        }
        // cout<<count;
        if(count>0){
            cout << "YES"<<endl;;
        }
        else cout<< "NO" <<endl;;
    }
    return 0;
}
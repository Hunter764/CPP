#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    bool hasZero = false;
    int minOpr = INT_MAX;

    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
        if(arr[i] ==0){
            hasZero = true;
        }else{
            minOpr = min(minOpr,abs(arr[i]));
        }
    }
    if(hasZero){
        cout<< 0 <<endl;
    }
    else cout<< minOpr <<endl;

    return 0;

}
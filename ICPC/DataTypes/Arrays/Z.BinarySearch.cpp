#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    while(Q--){
        int x;
        cin>>x;

        int l = 0, r = N-1;
        bool found = false;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(A[mid] == x){
                found = true;
                break;
            }
            if(A[mid] < x){
                l = mid+1;
            }
            else{
                r =mid -1;
            }
            
        }
        if(found){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>> n >> m >>k;
        
        int left[n];

        for(int i=0; i<n; i++){
            cin>>left[i];
        }

        int right[m]; 

        for(int j=0; j<m; j++){
            cin >> right[j];
        }

        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(left[i] + right[j] <= k){
                    count++ ;
                }
            } 
        }
        cout<< count << endl;   
    }
    return 0;
}
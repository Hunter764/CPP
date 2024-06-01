#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count =0;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count =1;
            break;
        }
       
    }
    if(count == 1) cout<<"HArd"<<endl;
    else cout<<"Easy"<<endl;
    return 0;
    
    }
    


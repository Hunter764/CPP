/*Insert an element from unsorted array to its correct position 
in sorted array*/
//12,45,23,51,19,8
//8,12,19,23,45,51

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
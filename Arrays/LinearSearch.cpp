#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    //input
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element that you want to search:";
    cin>>x;
    //search 
    //search mark
    bool flag = false;  //false not present
    for(int i=0;i<n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";
}
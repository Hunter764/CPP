#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    
    double arr[] = {a,b,c};
    sort(arr, arr+3);
    for(int i=0; i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}
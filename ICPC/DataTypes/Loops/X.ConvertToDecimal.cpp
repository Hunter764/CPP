#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;
    // while(t--){
       
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        vector<int> arr;
        while(n>0){
            arr.push_back(n%2);
            n /=2;
        }
        cout<<"Decimal to binary: ";
        reverse(arr.begin(),arr.end());
        for(int i=0; i<arr.size();i++){
            cout<<arr[i];
        }
        cout<<endl;
        int count = 0;
        cout<<"number of ones in Binary form: ";
        for(int i=0 ;i<arr.size(); i++){
            if(arr[i]==1){
                count++;
            }
        }
         cout<<count<<endl;
         cout<<"The ones: ";
         string ones;
        for(int i=0 ;i<count; i++){
            cout<<"1";
            ones.push_back('1');
        }
        cout<<endl;
        int decimal =0;
        int len = ones.length();
        for(int i=0; i<len ; i++){
            if(ones[len-i-1]=='1'){
                decimal += pow(2,i);
            }
        }
        cout<<"Given ones binary->decimal: "<<decimal<<endl;

        
    // }
}

// Enter the number: 10
// Decimal to binary: 1010
// numer of ones in Binary form: 2
// The ones: 11
// Given ones binary->decimal: 3
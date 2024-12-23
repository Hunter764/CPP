#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int arr[10] ={6,2,5,5,4,5,6,3,7,6};

    string s;
    for(int i=a; i<=b; i++){
        s += to_string(i);
    }
    int seg =0;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int num = ch -'0';
        seg += arr[num];
    }
    cout<<seg<<endl;
    return 0;
}
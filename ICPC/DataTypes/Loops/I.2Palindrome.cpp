#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int begin = 0;
    int end = n.size()-1;
    while(begin<end){
        if(n[begin] != n[end]){
            cout<<"NO"<<endl;
        }
        begin++;
        end--;
    }
    cout<<"YES"<<endl;
    return 0;
}
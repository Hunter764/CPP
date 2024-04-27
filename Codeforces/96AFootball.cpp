#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    int count=1;
    char current = s[0];
    for(int i=0;i<n;i++){
        if(s[i]==current){
            count++;
            if(count>=7){
                cout<<"YES"<<endl;
                return 0;
            }
            
        }
        else{
            count=1;
            current=s[i];
        }
}

cout<<"NO"<<endl;
return 0;
}
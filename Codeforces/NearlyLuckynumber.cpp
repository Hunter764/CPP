#include<iostream>
#include<string>
using namespace std;


bool lucky_num(long long n){
    string s = to_string(n);
    int count = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] =='4' || s[i]=='7'){
            count++;
        }
    }

    string count_str = to_string(count);
    for(int i=0; i<count_str.length(); ++i){
        if(count_str[i] !='4' && count_str[i] != '7'){
            return false;
        }
    }
    return true;

}

int main(){
    long long n;
    cin>>n;

    if(lucky_num(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0 ;
}
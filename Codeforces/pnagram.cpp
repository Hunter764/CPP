#include<iostream>
#include<string>
using namespace std;

bool isPangram(const string& str){
    bool alphabet[26] = {false}; 

    for(char c: str){
        if(isalpha(c)){
            alphabet[tolower(c) - 'a' ] = true;
      
        }
    }

    for(bool present : alphabet){
        if(!present){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(isPangram(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
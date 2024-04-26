/*Input a string of length greater than 5 and reverse the substring from position 2 to 5 
using in-built functions*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);   //hunter
    int len = s.length();
    if(len>5){
        reverse(s.begin()+1,s.begin()+5);  //position 2 and 5 means index 1 and 4
        cout<<s<<endl; //hetnur
    }
    else cout<<"Enter a valid string";

    return 0;
}
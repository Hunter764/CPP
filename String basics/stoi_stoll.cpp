#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "12345";
    int x = stoi(str); //stoi for string to integer conversion
    cout<<x+1;

    string s = "12345678736475";
    long long y = stoll(s); //stoll for string to long long conversion
    cout<<s;


}
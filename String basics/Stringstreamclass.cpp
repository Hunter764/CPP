/*Given a sentence , split every single word of the sentence
and print in a new line*/
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str ="Abhyudaya is a good student ";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}
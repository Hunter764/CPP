#include<iostream>
using namespace std;
int main(){
    char str[]={'a','b','c','d','e'};
    //char str[5]="abcd"; //output:- a b c d because of '\0' special null character

    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }
    //cout<<"My name is Abhyudaya"; //double quotes lke andar jo bhi aata h woh string hota hai

    // cout<<"abhvjdv\tavd";      // '\t' special tab character gives 4 spaces
    
    // char ch = '\0';
    // cout<<ch;  //No Output

    char ch = '?';
    cout<<(int)ch;  //it gives ASCII value and this method is called integer typecasting
    

}
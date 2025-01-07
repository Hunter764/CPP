/*
The program reads three integers: a, b, and n.
It converts a to a string and appends digits (0 to 9) to it to form a new number.
It checks if the new number modulo b equals 0. If true, it prints the number with n-1 trailing zeros.
If no such number is found, it prints -1.

*/
// a.x = 10.a + x   ,, a`=(10.a` + x%b)=0

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    string str_a = to_string(a);  //convert a to string
    for(int i=0; i<10; i++){
        string temp = str_a + to_string(i); //append digit i to a
        if(stoi(temp)%b == 0){          //check divisiblity of no. by b
            cout<<temp;
            for(int j=0; j<n-1; j++){
                cout<<"0";   //Append n-1 zeros
            }
            cout<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
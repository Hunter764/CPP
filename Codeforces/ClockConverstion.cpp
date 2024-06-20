#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int hour = (s[0] -'0')* 10 + (s[1]-'0');
        int minute = (s[3]-'0') * 10 + (s[4]-'0');
        string ampm;
        if(hour == 0){
            ampm = "AM";
            hour = 12;
        } else if(hour<12){
            ampm = "AM";
        }else if (hour == 12){
            ampm = "PM";
        }else{
            ampm = "PM";
            hour -=12;
        }
        if(hour<10){
            cout<<"0"<< hour << ":" <<s[3] <<s[4] <<" "<< ampm <<endl;
        }
        else{
            cout<< hour << ":" <<s[3] << s[4] <<" "<< ampm <<endl;
        }
    }
    return 0;
}
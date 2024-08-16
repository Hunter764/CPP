#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

string numberToWords(int num){
    if(num==0){
        return "Zero";
    }

    map<int , string>belowTwenty{
         {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"},
        {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
        {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}
    };

    map<int, string> Tens{
        {2, "Twenty"}, {3, "Thirty"}, {4, "Forty"}, {5, "Fifty"}, {6, "Sixty"},
        {7, "Seventy"}, {8, "Eighty"}, {9, "Ninety"}
    };
    if(num< 20) return belowTwenty[num];
    else if (num < 100) return Tens[num / 10] + (num % 10 ? " " + belowTwenty[num % 10] : "");
};




int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num<0 ||num>99){
        cout<<"Number is out of range.Please enter number between 0-100:";
        return 1;
    }
    cout<<numberToWords(num)<<endl;
    return 0;
}
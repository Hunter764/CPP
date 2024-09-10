/*
->C++ Strings
-> Getline
-> String reverse & palindrome
-> Dealing with Large Numbers
*/


/*
 ->chaarcter is always return in single quotes char='a';
 -> whereas string is always return in double quotes="hello";

int main(){
    string str= "Hello";
    cout<<str;
    string str2;
    cin>>str2;
    cout<<str2<<endl;
}



// concatinating two string

int main(){
    string str = "Hello";
    string str2="World";
    string result = str+str2;
    cout<< result;  ->HelloWorld

    
}



//Checking if strings are eqaul or not

int  main(){
    string str ="Hello";
    string str2="hello";
    if(str == str2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";  ->Not Equal
    }
}


//String Acess and Size

// In programming indexing starts from 0 

int main(){
    string str="hello";
    str[0] ='a';
    cout<<str<<endl;  ->aello
    cout<<str.size(); ->5
}


//Iterating in a string

int main(){
    string str = "Hello";
    for(int i=0; i<str.size(); ++i){
        cout<<str[i]; //Hello
    }
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    cout<<str1<<" "<<str2<<endl;
    
    // aeb
    // def
    // aeb def
}



-> method one

int main(){
    string str1 ,str2;
    cin>>str1>>str2;
    string str3 = str1 + " " +str2;
    cout<<str3;
}

//but now i  want the whole string in single line


//Getline function :- puri line ko function leta hai

int main(){
    string str1 ,str2;
    getline(cin,str1);
    cout<<str1;
}


int main(){
    int t;
    cin >>t;  //Read the nubmer of test cases
    cin.ignore(); //Igonore the newline after the integer input 't'
    while(t--){
        string s;
        getline(cin,s); //read th entire line including sapces into the string 's'
        cout<< s <<endl; // Output the string
    }
}



// ->Reverse a string


->method 1

int main(){
    string str;
    cin>>str;
    string str_rev;
    for(int i =str.size() -1; i>=0 ; --i){
        str_rev = str_rev + str[i];
    }
    cout<<str_rev;
    //output
    //adsfadfg
    //gfdafsda% 

    we should not this because:-
    1. never add a string to anothre string
    2. Time complexity
}


->method 2

int main(){
    string str;
    cin >>str;
    string str_rev;
    for(int i=str.size() -1; i>=0; --i){
        str_rev.push_back(str[i]);
    }
    cout<<str_rev;

    // output
    // abcd
    // dcba
}


-> Palindrome

A palindrome is a word, phrase, number, or sequence of characters
that reads the same forward and backward, ignoring spaces, punctuation, and capitalization

Words: "level," "radar," "madam"
Numbers: 121, 12321



-> Method one

int main(){
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1; i>=0; --i){
        str_rev.push_back(str[i]);    
    }
    if(str == str_rev){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    // Output
    // 121
    // Yes

}


->Method 2

int main(){
    string str;
    cin >>str;
    int start =0;
    int end = str.size() -1;

    while(start < end){
        if(str[start] != str[end]){
            cout <<"it is not a plaindrome";
        }
        start++;
        end--;
    }
    cout<<"It is a Palindrome";

    // Output
    // 123
    // it is not a plaindromeIt is a Palindrome
}

-> Dealing with large numbers in string


#include<bits/stdc++.h>  
using namespace std;

int main() {
    string s;  
    cin >> s;  // Take input string, e.g., "1234456734523514254623564565".
    
    // Output the last character of the string (which is a digit in the input).
    cout << s[s.size() - 1] << endl; // Outputs '5', the last character.

    // Output the ASCII value of the last character.
    cout << (int)s[s.size() - 1] << endl; // Outputs '53', which is the ASCII value of '5'.

    // Convert the last character from char to an integer.
    int last_digit = s[s.size() - 1] - '0';  // Subtracting '0' from a character digit gives its integer value.
    
    cout << last_digit; // Outputs '5', the last digit as an integer.
}


*/


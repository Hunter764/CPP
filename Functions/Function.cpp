#include<iostream>
#include<math.h>
using namespace std;
//functions are set of code which performs something for you
//functions are used to modulatise code
//functions are used to increase readability
//functions are used to use the same code multiple times
//void -> which does not returns anything
//return
//parameterised
//non parameterised

// void printName(string name){
//     cout<<"hey"<< " " <<name;
// }
// int main(){
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;

//     string name2;
//     cin >>name;
//     printName(name2);
//     return 0;
// }


//take two numbers and print its sum

// int  add( int num1 ,int  num2){
//     int num3 = num1 + num2; // 5 + 6 =11
//     return num3;

// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res =add(num1 ,num2);
//     cout<< res;
//     return 0;
// }

// int maximum( int num1 ,int num2){
//     if(num1 >= num2) return num1;
//     else return num2;

// }
// int main(){
//     int  num1  , num2;
//     cin >> num1 >>num2;
//     int maxx = maximum(num1,num2);
//     cout<<maxx;
//     return 0;
// }

//pass by value

// void doSomething(int num){
//     cout<< num<<endl;
//     num +=5;
//     cout<< num <<endl;
//     num+=5;
//     cout<< num <<endl;
// }
// int main(){
//     int num =10;
//     doSomething(num);
//     cout<< num <<endl;
//     return 0;
// }
//output:- 10 15 20 10 
//the original value never goes to the function it always take -ve value
//in pass by value the original value  is not passed 


//pass by reference 



// output :- 10 15 20 20 
//in pass by value original value is passed to the function


//In arrays we cannot pass by value it is always passed by reference
//Arrays always goes with pass with reference

//pass by refernce

void doSomething(int arr[] , int n){
    arr[0] +=100;
    cout<<"Value inside function :" <<arr[0] <<endl;
}
int main(){
    int n= 5;
    int arr[n];
    for(int i = 0; i<n; i = i+1){
        cin >> arr[i];
    }

    doSomething (arr , n);

    cout << "Value inside int main:" << arr[0] << endl;
    return 0;
}
//output:-
// 5
// 10
// 2
// 3
// 4
// Value inside function :105
// Value inside int main:105


//vector , map  ,list you have to make ensure that evrythinig must be passed by reference

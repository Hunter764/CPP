//given a and b return a power b

//Approach 1: Using a for loop

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;
//     int result = 1;
//     for(int i=1; i<=b; i++){
//         result *= a;
//     }
//     cout<<result<<endl;
//     return 0;
// }

// Enter the value of a: 5
// Enter the value of b: 2
// 25

//Approach 2 : recursion 

#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    };
    return a*power(a,b-1);
}

int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int result = power(a,b);
    cout<<result<<endl;
    return 0;
}


// Enter the value of a: 5
// Enter the value of b: 2
// 25
/*
->conditions
->Conditional Statements
-> Loops/infinte Loops
->Test Cases in __cplusplus
->Digit Sum & Life Universe and everything
*/

// &&  and  || operator

//&& operator gives true result when both the conditions are true
// || operator gives result true when any one of the condtion is true

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int a =5;
//     int b =4;
//     int c =3;
//     cout<<(b>a) && (b>c); //0 means false statement
//     cout<<(b>a) || (b>c); //0 
// }

// ->Conditions


/*
int main(){
    int n;
    cin >>n;
    if(n%2==0){
        cout<<"YEs";
    }
    else if(n%3 == 0){
        cout<<"Divisible by 3";
    }
    else{
        cout<<"No";
    }
}



 ->Scope of variable

int main(){
    int n;
    cin>>n;
    if(n%2 ==0){
        int x=2;
    }
    cout<<x; // compilation  error: use of undeclared identifier 'x'
}
In the given program, the scope of a variable defines where in the code that variable can be accessed or used.

- `int n;` is declared in the main function, so it has *function scope* and can be accessed anywhere inside the `main()` function.
- `int x=2;` is declared inside the `if` block, so it has *block scope*, meaning it can only be accessed within the curly braces `{ }` of the `if` block.

Since `x` is declared inside the `if` block, it cannot be accessed outside of that block. When the code tries to print `x` with `cout<<x;`, it gives a compilation error because `x` is out of scope and undefined in that part of the program.

**Summary:**
- `n` has a broader scope (whole function).
- `x` has limited scope (only inside the `if` block).



->Loops 

int main(){
    int i=1;
    while(i <=10){
        cout<<i <<endl;
        i++;
    }
}

1
2
3
4
5
6
7
8
9
10


int main(){
     for(intialisation; conditions; operations){
    }
    int i=1;
    for(;i<=10; ++i){
        cout<<i<<endl;
    }
    //or

    for(int i=1; i<=10; cout<< i++ <<endl){}
    
    //or
    
    for(int i=1; i<=10; i++){
        cout<<i <<endl;
    }
    
}


->pattern

int main(){
    for(int i=1; i<=4; i++){
        for(int j=1; j<=i; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
*
**
***
****


 -> how to code for test cases in CP 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1 ;i<=n; i++){
            for(int j=1; j<=i ;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
2
4
3
*
**
***
****
*
**
***


->Infinite loops

int main(){
    while(1){

    }

    or

    for(;;){}

    or
    
    for(int i=0; ;i++){}

    or

    for(int i=0; true; i++){}
}


-> Jump statements 1.  break;   2.  continue;
   1.break :- whenever the execution went to break it jumps the flow out of the last for loop 
   2.continue :- whenever the execution went to continue the flow  jumps back to the last for loop

   1. **`break`:** When the `break` statement is encountered inside a loop, it immediately terminates the current loop (whether it is a `for`, `while`, or `do-while` loop). The flow of control jumps out of the loop and continues with the next statement after the loop.

   Example:
   ```cpp
   for(int i = 0; i < 5; i++) {
       if(i == 3) {
           break;  // Exits the loop when i equals 3
       }
       cout << i << " ";
   }
   // Output: 0 1 2
   ```

2. **`continue`:** When the `continue` statement is encountered inside a loop, it skips the remaining statements in the current iteration and jumps to the next iteration of the loop. In a `for` loop, it moves control back to the update statement, and in a `while` or `do-while` loop, it moves control back to the condition check.

   Example:
   ```cpp
   for(int i = 0; i < 5; i++) {
       if(i == 3) {
           continue;  // Skips the rest of the iteration when i equals 3
       }
       cout << i << " ";
   }
   // Output: 0 1 2 4
   ``` 


int main(){

        for(int i=0; i<10 ;i++){
            if(i==8){
                if(true){
                    if(true){
                        break;
                    }
                }
            }
            cout<<i<<endl;
        }
    }
    0
1
2
3
4
5
6
7
*/





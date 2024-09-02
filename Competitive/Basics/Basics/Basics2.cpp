// ->Calculation Order for Datatypes
// ->Operator Precedence
// ->Overflow in calculations (Imp)
// ->Precision Errors with Double/Float

#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<< 7 / 2 <<endl; //3 integer output
    // cout<< 7 / 2.0<<endl; //3.5
    

    /*Calculation always happens in higher datatypes*/

    /*
    very important
    precedence order:- Double > Float > Long Long > Long > Int > Characters

    */

    // int a = 3/2.0;
    // cout<<a; //1 because variable a always stores int data

    // double a = 3/2.0;
    // cout<<a;  //1.5

    // double a = 3/2;
    // cout<<a; //1 because the calculation is happeing in inte datatype

    /*table for Operator precedence*/


    // cout<< 7/2 * 3; //9  precedence from left->right
    // cout<< 3 * 7/2; //10


    /*very important */

    // ->overflow
    //An "integer overflow" in C++ occurs when an arithmetic operation results in a value that exceeds the storage capacity of the data type being used. When this happens, the value "wraps around" to the minimum or maximum value representable by that data type, leading to unexpected behavior.


    /*
    int , char , long , long long, float , double

     -> rough ranges to be remeberred

    -10^9 < int < 10^9
    -10^12 < long < 10^12
    -10^18 < long long < 10^18


    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout<<c<<endl; //1410065408 because it exceeded the range an its a overflow condition

    // INT_MAX gives the max value of integer

    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout<<c<<endl;
    int mx = INT_MAX;
    cout<< mx; //2147483647 in 10^9 order
    int max = INT_MAX + 1;
    cout<< max;    //-2147483648 cycle starts when exceeds the range
    Note:-cycle starts when exceeds the range


    int a = 100000;
    int b = 100000;
    long c = a* 1LL * b;
    cout<<c<<endl; //10000000000

    Note:- 1LL can be used to concvert

    */


   /* 
   
   ->Precision  Error in Double and Float

   Note:- we Should not use Double and float int contest unless until it is said in the question 
   because double and float can store larger values but it can't store them accurately which will give the error in th contest


   double a = 100000;
   double b = 100000;
   double c = a * b;
   c = 1e24;
   cout<<fixed << c << endl;  //999999999999999983222784.000000
   cout<<fixed << setprecision(0) << c << endl;  //999999999999999983222784

    e is scientific way to 10 to power something And it works in programming languages also

    In C++, the fixed and setprecision manipulators are used together to control the formatting of floating-point output in the cout stream.

    fixed Manipulator
    Purpose: The fixed manipulator forces the output to be in fixed-point notation, meaning the number is displayed as a decimal number rather than in scientific notation.
    Effect: When you use fixed, it ensures that the output will always have a decimal point, even if the number is an integer or has no fractional part.

    setprecision Manipulator
    Purpose: The setprecision(n) manipulator controls the number of digits displayed after the decimal point.
    Effect: When used with fixed, setprecision(n) determines the exact number of digits that appear after the decimal point.



    Note:- In Ranges never use Double and Float in contest cause it will give you  the near by answer but not the accurate one

  
   

   */
}
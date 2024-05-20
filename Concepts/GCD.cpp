//calculating GCD of two numbers

// #include<iostream>
// using namespace std;

// //function to return gcd of a and b

// int gcd(int a ,int b){
//     int result = min(a,b);
//     while(result > 0){
//         if(a % result == 0 && b % result == 0){
//             break;
//         }
//         result--;
//     }

//     return result;
// }

// int main(){
//     int a = 98 , b =56;
//     cout<<"GCD of "<< a << " and " << b <<" is "<< gcd(a,b);
//     return 0;
// }


// Time complexity :- O(min(a,b))
// Space complexity :- O(1)







// => EUCLIDEAN ALGORITHM

/*The idea of this algorithm is, 
the GCD of two numbers doesn’t change if the smaller 
number is subtracted from the bigger number.
This is the Euclidean algorithm by subtraction. It is a process of repeat subtraction, 
carrying the result forward each time until the result is equal to any one number being subtracted.*/

#include<iostream>
using namespace std;

//function to return gcd of a and b

int gcd(int a ,int b){
    
    //everything divides zero

    /* if either a or b is zero, the GCD is the non-zero value. This is because any number is divisible by zero.*/
    if(a== 0)
        return b;
    if(b == 0)
        return a;

    //base case
    if(a==b)
        return a;

    // a is greater
    if(a>b)
        return gcd(a-b , b);
    return gcd(a, b-a);         
}

//Driver code

int main(){
    int a = 98 , b =56;
    cout<<"GCD of "<< a << " and " << b <<" is "<< gcd(a,b);
    return 0;
}


//Time complexity :- O(min(a,b))
//Space complexity :- O(1)










//  OPTIMIZATION BY CHECKING DIVISIBILITY
/*If we notice the previous approach, we can see at some point,
 one number becomes a factor of the other so instead of repeatedly subtracting till both become equal, 
we can check if it is a factor of the other.*/


// C++ program to find GCD of two numbers

// #include <iostream>
// using namespace std;

// // Recursive function to return gcd of a and b
// int gcd(int a, int b)
// {
// 	// Everything divides 0
// 	if (a == 0)
// 		return b;
// 	if (b == 0)
// 		return a;

// 	// Base case
// 	if (a == b)
// 		return a;

// 	// a is greater
// 	if (a > b) {
// 		if (a % b == 0)
// 			return b;
// 		return gcd(a - b, b);
// 	}
// 	if (b % a == 0)
// 		return a;
// 	return gcd(a, b - a);
// }

// // Driver code
// int main()
// {
// 	int a = 98, b = 56;
// 	cout << "GCD of " << a << " and " << b << " is "
// 		<< gcd(a, b);
// 	return 0;
// }


//Time complexity :- O(min(a,b))
//Space complexity :- O(1)











//OPTIMIZED CODE USING % OPERATOR

// #include<iostream>
// using namespace std;

// int gcd(int a , int b)
// {
//     return b==0 ? a : gcd(b, a%b);
// }

// int main()
// {
// 	int a = 98, b = 56;
// 	cout << "GCD of " << a << " and " << b << " is "
// 		<< gcd(a, b);
// 	return 0;
// }

// Time Complexity: O(log(min(a,b)))









//GCD of two numbers using inbuilt function
// c++ program to find gcd using inbuilt functions
// #include <algorithm>
// #include <iostream>
// #include<numeric>
// using namespace std;

// int main()
// {
// 	int a = 98, b = 56;
// 	cout << "The gcd of a and b is " << __gcd(a, b) << endl;
// 	return 0;
// }

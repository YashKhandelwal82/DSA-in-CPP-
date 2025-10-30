#include<iostream>
using namespace std ;

 int factorial(int n ){ 
    // if(n < 0){
    ///    return 0;
     // }
     // base case :->
    if(n == 0 ){ 
        return 1 ;
    }
     return n * factorial(n - 1);
 }
 
int main (){
   int n ;
   cout << " enter the value " << endl;
   cin >> n ;
   int ans = factorial(n);
   cout << "factorial of a given number is :-> " << ans  << endl;
   return 0; 
} 
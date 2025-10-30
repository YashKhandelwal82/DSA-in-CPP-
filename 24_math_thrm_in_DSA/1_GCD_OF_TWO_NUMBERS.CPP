#include<iostream>
using namespace std ;

int gcd(int a , int b ){
     if(a==0){
        return b ;
     }
     if(b==0){
        return a;
     }

     while(a != b){
        if(a>b){
            a = a - b ;
        }
        else {
            b = b - a ;
        }
     }
   return a ;
}


int amin (){
    
    cout << " enter the first number " << endl;
    int a ;
    cin >> a ;

    cout << " enter the second number " << endl;
    int b ;
    cin >> b;

   int ans =  gcd(a,b);
   cout << " GCD of number are :->" << ans ;
 
  return 0 ;
}
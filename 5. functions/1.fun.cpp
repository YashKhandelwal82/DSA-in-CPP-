#include<iostream>
using namespace std ;

int power( ){
     int a , b ;
    cout << " enter the value of a and b" << endl;
    cin >> a >> b ;
     int ans = 1 ;
     for ( int i = 1 ; i <= b ; i++){
        ans =  ans * a ;
    }  
    return ans ;
}

int main(){

   ///power (a , b )
   // if we have to do this and 
   // write a code again and again than we use a funtion 
   // make the code as a function and call it again and again when it is usses///
    int ans = power( );
    cout << " Answer is : " << ans << endl ;
     return 0 ;
}
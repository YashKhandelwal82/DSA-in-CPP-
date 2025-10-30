#include<iostream>
using namespace std ;

int factorial( int n ){
     int fact = 1;
      
      for( int i = 1 ; i <= n ; i++){
        fact = fact * i ;
      }
      return fact ;
}

int nCr( int n , int r ){
    int ans;
    if ( r == 0){
        return 1;
    }
    else {
     ans =( factorial(n) ) / ( (factorial(r)) * (factorial( n - r)) );
    }
    return ans ;
}

int main (){
    int n , r ;

    cout<< " enter the value n and r " << endl;
    cin >> n >> r;
   int ans = nCr(n , r);
   cout << " VALUE OD nCr is :" << ans << endl ;
    return 0 ;
}
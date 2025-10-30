#include<iostream>
using namespace std ;


int main(){

int ans = 0  ;

  int arr[6] = { 1, 2, 1, 1, 5, 2,};
   for( int i = 0 ; i < 6 ; i++){
     ans = ans^arr[i];
   }
 cout << " unioque element in the array are : " << ans << " " ;  
    return 0 ;
}
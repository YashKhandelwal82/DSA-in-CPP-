#include<iostream>
using namespace std ;

// a ki power b :-> time complexity is o(log b)
int main(){
    int a = 2;
    int b =- 10 ;

    int res = 1; 

    while(b != 0){
        if(b & 1 ){
            // power is odd 
            res = res * a ;
        }
        a = a * a ;
        b = b >> 1 ; // divide by 2 
    }


    return 0 ;

}
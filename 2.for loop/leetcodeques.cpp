#include<iostream>
using namespace std ;
int main (){
    
    int n ;
    cout<< " enter a number ";
    cin >> n ;
    int sum = 0 , prod = 1 ;
    int rem  ;
    while(n!=0){
    rem = n % 10 ;
    n = n /10;
    sum = sum + rem ;
    prod = prod * rem ;
    }
    int answer = prod - sum ;
return(answer );

    

}
#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<< "to check the number is prime or not enter the value of n ";
    cin >> n ;
 for (int i = 2 ; i <=(n-1); i++){
if (n % i == 0){
    cout << " \n not a prime number ";
    break ;
}
else {
    cout << "\n prime ";
} }
}
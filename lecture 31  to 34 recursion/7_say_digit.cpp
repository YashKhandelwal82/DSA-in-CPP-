#include<iostream>
using namespace std ;
  
void sayDigit(int n , string arr[]){
    // base case 
    if(n == 0)
      return ;
    
      // processing part
    int digit = n % 10;
    n = n / 10;



    // tail recursive call :->
    sayDigit(n , arr);
    cout << arr[digit] << " " ;

}

  
int main(){

    string arr[10] = {"zero" , "one" , " two " , " three" , "four" , 
                     "five" , "six" , "seven" , "eight", "nine" };

    int num ;
    cout << " enter the number :->" << endl;
    cin >> num  ;

    cout << endl;

    sayDigit(num , arr);
 return 0 ;

}
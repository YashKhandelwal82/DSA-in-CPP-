#include<iostream>
using namespace std ;

  void counting(int n){
    if(n == 0){
      return ;
    }  
    counting(n - 1);
    cout << n << endl;
   //  counting(n - 1); /// tail recursion due to recursive function come at the last line 
  }

int main(){

    int n ;
    cout << " enter the value till you want to print the counting " << endl;
    cin >> n;

    cout << " coounting till : " << n << " is :->" << endl;
    counting(n);
}
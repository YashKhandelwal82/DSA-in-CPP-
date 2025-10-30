#include<iostream>
using namespace std ;

int main(){

   int first = 8;
  int second = 10;

  int*ptr = &second ;

   *ptr = 9 ;

 cout << " first :->"  << first << " " << "second :- " << second << endl; 


 return 0 ;
}
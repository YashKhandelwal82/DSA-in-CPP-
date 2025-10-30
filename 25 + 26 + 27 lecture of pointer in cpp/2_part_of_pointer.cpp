#include<iostream>
using namespace std ;

int main(){

  int arrr[10] = {1,2,3,4,5,6,7,8,9,10};

  // first block of array adress is given by :->
   cout << " adress of first block of array is :->" << arrr << endl;

   
 // but we have & operator to :->
 cout << " adress of first block of array is :->" << &arrr[0] << endl;

  
 cout << " adress of arr :->" << &arrr << endl;

 // it will give the value at zeroth location 
 cout << " value of arr :->" << *arrr<< endl;

 // we have to find the value at 5th location :->
 cout << " value of arr :->" << (*arrr) + 5 << endl;
 cout << " value of arr :->" << (*arrr) + 3 << endl;

 int i = 3 ;
 cout << i[arrr] << endl;


  int *p = &arrr[0];
  cout <<  "size of array" << sizeof(arrr) << endl;// it will give the size of entire array 
  cout <<  "size of pointer " << sizeof(p) << endl;
   
  // it will give the value stored at the adress of pointer stored
  cout <<  " value at pointer " << *p << endl;
  cout <<  " adress of pointer " << &p << endl;

  // & operator 
  cout << " adress of 6th place " << &arrr[7] << endl;

  p = p + 1;// increase to one block of integer 
  cout << " after increase the value at p :-> " << *p << endl;

  p = p + 3;
  cout << " after increament by 3 :->" << &p << endl << *p << endl ;


return 0 ;
}
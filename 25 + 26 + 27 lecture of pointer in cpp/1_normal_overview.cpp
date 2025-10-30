#include<iostream>
using namespace std ;

int main() {
 
    int num = 5 ;

    cout << num << endl;
    // address of operator - &
    // given in hexadecimal form
   cout << " address of num is  " << &num << endl;
   int *ptr = &num;

  // it give adress 
  cout << ptr << endl;

// it will give the value stored at ptr
  cout << (*ptr + 1 ) << endl;
  cout << " size or double pointer is :->" << sizeof(ptr) << endl;

// * :-> de-reference operator 

double d = 34.65;

double *ptr2 = &d;
cout << ptr2 << endl;
cout << *ptr2 << endl;

cout << " size or double pointer is :->" << sizeof(ptr2) << endl;

// pointer to int is created and is pointing to garbage value 
 int *p ;// we don't have to do this like this 
 cout << *p << endl;

 // we can correct it by *p = 0 ;
 int i = 90 ;
 int *p3 = 0;// null pointer 
 p3 = &i;
 
 cout << p3 << endl;
 cout << *p3 << endl;

 
 int a = num ;

 a++;
 cout << num << endl; 

 int *pt = &num ;
 int b = *pt;
 b++; // [*pt]++;
 cout << b << endl;
 cout << ((*pt)*5 ) << endl;

 // copy of one pointer to another pointer 
 int *q = pt; // copy k time pr joh copy hoga usko star nahi likhte ;
 cout << " value of q is " << *q << endl;
 // q = q + 1 :-> iska mtlb agle integer location pr chle jao
    return 0 ;
}
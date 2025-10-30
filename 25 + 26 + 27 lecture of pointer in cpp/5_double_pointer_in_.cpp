#include<iostream>
using namespace std ;
void update ( int **p){
  //  p = p + 1 ;
    // kuch change hoga - no change 

   // *p = *p + 1;
   // kya isse kuch change hoga - yes 

  **p = **p + 1 ;
   // kaya isse kuch change hoga - yes 
}


int main(){
  
   int i = 7 ;
   int *ptr = &i ;
   // ptr is the pointer corresponding to integer i 

   // if we have to create a pointer corressponding to ptr ;
   int **ptr2 = &ptr;
    
   cout << " value of we created :->" << i << endl;

   cout << "address of i " << ptr << endl;
   // it will print the adress of i in memmory 

   cout << " value at adress place in ptr is :->" << ptr << endl;
   cout << " value at adress place in ptr is :->" << *ptr2 << endl;
   // both will give the same output

   // we can excess the value of i at three cases 
   cout << " value at adress place in ptr is :->" << *ptr << endl;
   cout << " value store at the adress inside ptr2 usse adress pr jake joh address ukse andr usse address pr value print karna hain :->" << " " << **ptr2 << endl;
   cout << " value of we created :->" << i << endl;

   cout << endl ;
   update(ptr2);

   cout << endl;

   cout << " after " << i << endl;
   cout << " after " << ptr << endl;
   cout << " after " << ptr2 << endl;


    return 0 ;
}
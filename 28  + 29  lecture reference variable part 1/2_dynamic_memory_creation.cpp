#include<iostream>
using namespace std ;

int main (){
  
   char c = 'q';
   cout << sizeof(c)<< endl;;

   char *ptr = &c ;
   cout << sizeof(ptr)  <<endl;
    // return memory block address :->
    // new :-> it uis the keyword to create a dynamic memory allocation 
    
    char *ch = new char ;
    cout << " total size of character block " << sizeof(ch) << endl;
    *ch = 'y';
  cout << "value at character block :->" << *ch << endl;


    int *i = new int ;

    *i = 12 ;
    cout << " before :->" << *i << endl;

    (*i)++;

    cout << " after :->" << *i << endl;
    return 0 ;
}
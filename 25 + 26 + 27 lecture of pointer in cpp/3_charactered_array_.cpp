#include<iostream>
using namespace std ;

int main () {

    int arr[5] = {1,5,6,7,8};

    char ch[7] = {"abcde"};
 
    // it will give first array element address 
   cout << arr << endl;
   // it will give the whole content of array 
   // cout << have different behaveiour of int and char 

   cout << ch << endl;

   
   cout << "size of arr :->"  <<  sizeof(arr) << endl;
   cout << "size of character array  :->"  << sizeof(ch) << endl;
   cout << arr << endl;
   char *p = &ch[0] ;
   cout << "value of ch :->" << *p << endl;
 
   char temp[] = "z" ;

   char *pt = &temp[0];

   cout << temp << endl;
   cout << *pt << endl;




    return 0 ;

}
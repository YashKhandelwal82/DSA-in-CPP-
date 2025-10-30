#include<iostream>
using namespace std ;

int  main (){

   // question 

// we have a string replace the space by @40 in whole string 
 string s = "my name is yash khandelwal ";
 string temp = " ";

  for(int i = 0 ; i < s.length() ; i++){
     

     if(s[i] == ' '){
       
        temp.push_back('@') ;
        temp.push_back('4') ;
        temp.push_back('0') ;
     }
     else {
        temp.push_back(s[i]) ;
     }
   }
 
   cout << temp ;


    return 0 ;
}
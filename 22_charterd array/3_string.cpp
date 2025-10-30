#include<iostream>
using namespace std ;


int  main (){
 // what is the disfference between the charactered array and string ;
  char a[10] ;
  a[2] = '\0';
  cout << " enter your name " << endl;
  cin >> a ;

  string str ;
  cout << " enter your name " << endl;
  cin >> str ;

  cout << " chartered array output is :->" << a << endl;
  cout << " string str output is like as :-> " << str << endl;
  

    return 0 ;
    
}

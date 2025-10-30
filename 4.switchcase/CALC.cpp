#include<iostream>
using namespace std ;
int main (){
    int a , b ;
    char op  ;
    
    cout << " Enter the value od  operator A  " << endl ;
    cin >> a ;
      
    cout << " enter the value of b " << endl ;
    cin >> b;

    cout << " Press operation that u wan to perform   " << endl ;
    cin >> op ;
    
   switch ( op  ){

        case '+' :
        cout << " ADD IS :" << a + b << endl;;
        break;
        
        case '-' :
       cout << "SUB IS: " << a - b << endl;
       break ;

       case '*' :
       cout << " MUL IS :" << a * b << endl ;
       break ; 

       case '/':
       cout << " DIV IS : " << a / b << endl ;
       break ;

       case '%':
       cout << " REM IS :" << a % b << endl ;
       break ;
        
        default : cout << " PLEASE ENTER THE VALID OPERATION " << endl;
        
    }
  cout << endl;
  return 0 ;
}
#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout << " CODE TO KNOW THAT IN GIVEN NUMBER HOW MANY NO. OF NOTES ARE REQUIRED OF 100 , 50 , 20 , 10 " << endl;
    cout << " ENTER THE NUMBER " << endl ;
    cin >> n ;
    int num ;
    
    cout << " Enter (1 - 100 RS NOTE ) , (2 - 50 RUPEE NOTE ) , ( 3 - 20 RUPEE NOTE ) , (4 - 10 RUPEE NOTE ) " << endl ;
    cin >> num ;
      
    switch ( num   ){

        case 1 :
        cout << " 100 RUPEE NOTE REQUIRED IS  :" << (n / 100)<< endl;;
        break;
        
        case 2 :
       cout << " 50 RUPEE NOTE REQUIRED IS: " << (n / 50) << endl;
       break ;

       case 3 :
       cout << "  20 RUPEE NOTE REQUIRED IS :" << (n / 20) << endl ;
       break ; 

       case 4:
       cout << " 10 RUPEE NOTE REQUIRED IS : " << (n / 10 )<< endl ;
       break ;
        
        default : cout << " PLEASE ENTER THE VALID NUM FOR KNOW" << endl;
        
    }
  cout << endl;
  return 0 ;
}
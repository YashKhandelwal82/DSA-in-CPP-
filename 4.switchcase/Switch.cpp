#include<iostream>
using namespace std ;
int main (){
    int num = 2 ;
    char  ch = 1 ;

    cout << endl;

    switch ( num ){

        case 1 : cout << "YASH" << endl;
        break;
        
        case 2 :
        // NESTED SWITCH ALSO WORK HERE 
        switch ( ch ){
            
            case 1 :  cout << " YASH KHANDELWAL" << endl;
            break;
            

            case 2 : cout << " YASHUUU" << endl;
            break ;
        }
        break ;

        
        default : cout << " INVALID NAME " << endl;
        
    }
  cout << endl;
  return 0 ;
}
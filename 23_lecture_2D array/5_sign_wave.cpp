#include<iostream>
using namespace std ;

int main(){

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
   // printing normal array :->

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++){
          cout << arr[i][j] << " " ;
        }
        cout << endl;
      }
    
     //  printing a matrix in sin wave function :->
     for(int col = 0; col < 3 ; col++)
     {
        if(col & 1 ){
            // odd indexes - bottom to top 
            for(int row = 3 -1 ; row >= 0 ; row--){
                cout << arr[row][col] << " " << endl;
            }
        }
        else {
            // zero or even indexes - top to bottom :->
            for(int row = 0 ; row < 3 ; row++){
                cout << arr[row][col] << " " << endl;
            }
        }
     }


    return 0 ;
}
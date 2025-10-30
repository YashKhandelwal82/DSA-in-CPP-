#include<iostream>
using namespace std ;
// to print the row wise sum :->

void printsumrow(int arr[][3] , int row , int col){
  cout << " Printing the sum of rows element " ;
  cout << endl;
   for(int i = 0 ; i < row ; i++){
    int sum = 0;
     for(int j = 0 ; j < col ; j++){
        sum = sum + arr[i][j];
     }
     cout << sum << " ";
   }
}

/* to print the column wise sum :->*/
void printsumcol(int arr[][3] , int row , int col){
    cout << " Printing the sum of columns element " ;
    cout << endl;
     for(int i = 0 ; i < col ; i++){
      int sum = 0;
       for(int j = 0 ; j < row ; j++){
          sum = sum + arr[j][i];
       }
       cout << sum << " ";
     }
  }

int main(){

    int arr[3][3] = {1,2,3,4,5,6,7,8,9,};
    // input of 2d arrray :->
    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 3 ; j++){
    //    cout << " enter the value of Ith row and Jth column :->" << i , j ;   
    //       cin >> arr[i][j];
    //     }
    //   }
    // print the 2d array :->
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
          cout << arr[i][j] << " " ;
        }
        cout << endl;
      }
      printsumrow(arr,3,3);
      printsumcol(arr , 3,3);

    return 0 ;

}
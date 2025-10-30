#include<iostream>
using namespace std ;

// searching in  2D - array :->
// linear search o(m*n):->
 bool ispresent(int arr[][4] , int key , int row , int col ){
    for(int i = 0 ; i < row ; i++){
      for(int j = 0 ; j < col ; j++){
        if(arr[i][j] == key  ){
          return 1; 
        }
      }
    }

 return 0 ;

 }
 




int main(){


    int arr[3][4];
   // i can take it as input in this way also and 
   /*int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,.12};
   int arr[3][4]= {{1,11,111,1111} , {2,22,222,2222}, {3,33,333,3333}};
   */
 
  // itys take row wise input of array 
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
       cout << " enter the value of Ith roe and Jth column :->" << i , j ;   
          cin >> arr[i][j];
        }
      }
    // print the 2d array :->
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
          cout << arr[i][j] << " " ;
        }
        cout << endl;
      }
    cout << " Enter the element that you want to  search  :->" << endl;
    int  target ;
    cin >> target ;
    if(ispresent(arr, target , 3 , 4)){
        cout << " Element Found " << endl;
    }
    else {
        cout << " Not found" <<endl;
    }
    return  0 ;

}
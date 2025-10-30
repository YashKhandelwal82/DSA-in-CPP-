#include<iostream>
using namespace std ;


int print(int arr[][3], int row , int col ){
for(int i = 0 ; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
      cout << arr[i][j] << " " ;
    }
    cout << endl;
  }
}


// largest row sum konsi row ka hain:->
int largestrowsum(int arr[][3] , int row , int col){
    int maxi = INT8_MIN;
    int rowindex = -1 ;
    
     for(int i = 0 ; i < row ; i++){
      int sum = 0;
       for(int j = 0 ; j < col ; j++){
          sum = sum + arr[i][j];
       }
       if(sum > maxi){
        maxi = sum ;
        rowindex = i ;
       }
     }
  cout << " the maximum sum is :->" << maxi << endl;
  return rowindex;
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    
  print(arr,3,3);
  cout << " Max row sum is at :->" << largestrowsum(arr,3,3)<< endl;


    return 0 ;

}
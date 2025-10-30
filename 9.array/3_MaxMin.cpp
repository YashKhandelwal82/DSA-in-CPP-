#include<iostream>
#include<limits>
using namespace std ;

int getMaxVal( int arr[] , int n ){

    int maxVal = numeric_limits<int>::min() ;

 for(int i = 0 ; i < n ; i++){
    if(arr[i] > maxVal ){
        maxVal = arr[i];
    }
 }
 return maxVal ;
}

int getMinVal( int arr[] , int n ){

    int minVal = numeric_limits<int>::max() ;

 for(int i = 0 ; i < n ; i++){
    if(arr[i] < minVal){
        minVal= arr[i];
    }
 }
 return minVal;
}

int main (){


 int size ;
 cin >> size ;

  int arr [100];

  for(int i = 0 ; i < size ; i++){
    cout << " enter data for element " << i + 1 << " : "<<  endl;
    cin >> arr[i];
  }
 cout << "Maximum value is:"<< getMaxVal(arr , size ) << endl; 
 cout << "Minimum value is :"<< getMinVal(arr , size )<< endl ;

return 0 ;
}
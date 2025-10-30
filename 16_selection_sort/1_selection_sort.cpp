#include<iostream>
using namespace std ;

void print(int a[], int size){
    for(int i = 0 ; i < size ; i++){
        cout << a[i] << " ";
    }
}

void selectionsort(int a[] , int n ){
  
for(int i = 0; i < n-1 ; i++){
      int minIndex = i ;

      for(int j = i+1 ; j < n ; j++){
          if(a[j] < a[minIndex])
            minIndex = j;
       }
     swap(a[minIndex] , a[i]);
    }
}

int main (){

int arr[5] = {65,25,12,11,22};
  // before sorting
  print(arr , 5);
 // function of doing selection sort 
  
  cout << " sorted array" ;
  selectionsort(arr , 5);

  // after sorting 
  cout << endl;
  print(arr  , 5);

    return 0;
}
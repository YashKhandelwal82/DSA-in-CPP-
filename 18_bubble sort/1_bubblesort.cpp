#include<iostream>
using namespace std ;


void print (int a[] , int n )
{
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << "  ";
    }
}




void bubblesort(int a[], int n ){

for(int i = 0 ; i < n -1 ; i++ ){
      
      // for round 1 to n -1 
      bool swapped = false ;
      for(int j = 0 ; j < n-i-1 ; j++){
            // process index till n - ith index
              if(a[j] > a[j+1]){
                 swap(a[j] , a[j+1]);
                  swapped = true ;
              }
          }
         if(swapped == false ) break;           
       }
}
int main (){

int arr[7] = { 10, 12, 1, 6, 2, 55, 23 };

  // arrray unsorted 
      print(arr, 7);
  
  bubblesort(arr , 7);
cout << " printed sorted array " << endl;

 print(arr , 7);


  return 0;
}
#include<iostream>
using namespace std ;

void print(int a[] , int size )
{
    for(int i = 0 ; i < size ; i++){
        cout << a[i] << "  ";
    }
}

void insertationsort(int a[] , int n ){
   for(int i = 1; i < n ; i++){
     int temp = a[i];
     int j ;
       for( j = i - 1; j >= 0 ; j--){
          
          if(a[j] > temp){
            // righgt shift 
            a[j+1] = a[j];
           }
          else {// ruk jao  
            break;
          }
       }
       a[j+1] = temp;
   }
   
}

int main (){

  int arr[6] = { 23,25,1,26,21,2};
  cout << " printing unsorted array :"<< endl;
  print(arr,6);

  // doing insertation sort 
     insertationsort(arr , 6);

cout << " printing sorted arrray : " << endl;
print(arr,6);

    return 0;
}
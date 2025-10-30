#include<iostream>
using namespace std ;



void intersection (int arr[] , int brr[] , int size_1, int size_2  ){

    if(size_1 >= size_2){
        for(int i = 0 ; i < size_1 ; i++){
            for (int j = 0 ; j < size_2 ; j++){
                
               if ( arr[i] == arr[j]){
                cout << " Intersecxtion of elements in both array are "<< arr[j] << " " << endl ;
               }
            }
        }
    }
    // if second array has the greater size than first array 
    else {
        for(int i = 0 ; i < size_2 ; i++){
            for (int j = 0 ; j < size_1 ; j++){
                
               if( arr[i] == arr[j]){
            
         cout << " Intersecxtion of elements in both array are "<< arr[i] << " " << endl ;
           }
         }
       }
    }
}

int main (){


int arr[6] = { 1, 2, 3 ,4 ,5 ,6 };
int brr[7] ={ 5 , 6, 7, 8, 10, 11, 9};

   
    intersection(arr , brr, 6, 7 );


    return 0;

}
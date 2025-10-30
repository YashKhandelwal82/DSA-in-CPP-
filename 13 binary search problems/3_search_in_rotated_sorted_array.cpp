#include<iostream>
using namespace std ;

int pivot(int arr[] , int n){
       
       int s = 0;
       int e = n-1;
       int mid = s + (s + e)/2;

       while (s < e){
        if(arr[mid] > arr[0]){
            s = mid + 1 ;
        }
        else {
            e = mid ;
        }
        mid = s + (s + e)/2;
       }
 return s ;
}

int targetsearch(int arr[] , int size , int target ){
   
   if(arr[pivot(arr,size)] <= target && target <= arr[size-1]){
       int start = arr[pivot(arr,size)];
       int end = size - 1;
       int mid = (start + end )/2;

       while (start <= end ){
        if( arr[mid] == target ){
            return mid ;
        }
        else if ( target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1 ;
        }
        mid = (start + end )/2;
       }
   return -1;
   }
   else {
      int end = arr[pivot(arr,size) - 1];
       int start = 0;
     int mid = (start + end )/2;

       while (start <= end ){
        if( arr[mid] == target ){
            return mid ;
        }
        else if ( target > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1 ;
        }
        mid = (start + end )/2;
       }
   return -1;
   }
}

int main(){

    int b[5] = {7, 9, 1, 2, 3,};

     int target = 2; 
   cout << " target is present at : " << " " << targetsearch(b , 5 , target) << " " ;

}
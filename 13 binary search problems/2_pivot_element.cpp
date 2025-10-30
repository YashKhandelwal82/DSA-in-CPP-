#include<iostream>
using namespace std ;
// code to search the pivot element 
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

void print( int arr[] , int size ){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
}

int main (){

    int a[5] { 1, 2, 3, 7, 9 };
    print(a,5);
    cout << " array after pivoted : "<< endl;
    int b[5] = {7,9,1,2,3};
    print(b , 5);
   
    cout << " pivot element in array at index is : " << " " << pivot(b , 5);
    

    return 0 ;
}
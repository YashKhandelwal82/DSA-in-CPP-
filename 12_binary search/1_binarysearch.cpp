#include<iostream>
using namespace std;

void print(int arr[] , int size ){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}
 
  int binarysearch( int arr[] , int size , int key ){
       int start = 0;
       int end = size - 1;
       int mid = (start + end )/2;

       while (start <= end ){
        if( arr[mid] == key ){
            return mid ;
        }
        else if ( key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1 ;
        }
        mid = (start + end )/2;
       }
   return -1;
}

int main (){

   int a[6] = { 52, 56, 58, 59, 62, 64};
    // array of even leangth
   int b[5] = { 12, 13, 14, 15, 17}; 
   // array of odd leangth
   

   print(a , 6);
   cout << endl;
   print(b , 5);
   int key1 , key2 ;
   cout << "\n enter the key that u want to search in  array:" << endl;
   cin >> key1;

   cout << " \n enter the key u want to search in odd array : "<< endl;
   cin >> key2;
   int ans  = binarysearch( a , 6 , key1);
   int bns  = binarysearch( b, 5 , key2);

   cout << " key is found at : " << ans << " ";
   cout << " key is fornd at : " << bns << " ";
    return 0;
}
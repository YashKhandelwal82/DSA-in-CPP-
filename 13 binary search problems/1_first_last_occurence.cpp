#include<iostream>
using namespace std ;
void print(int arr[] , int size ){

for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}
}

int leftoccourence(int arr[] , int size , int  k ){
    int ans = -1 ;
    int s = 0;
    int e = size -1 ;
    int mid = s + ((e-s)/2);

    while(s < e ){

      if(arr[mid] == k){
       ans = mid ;
       e = mid - 1;
      }
      else if(arr[mid] > k ){
        e = mid -1 ;
      }
      else{
        s = mid +1 ;
      }
     mid = s + ((e-s)/2);
    }
  return ans ;
}

int rightoccourence(int arr[] , int size , int  k ){
    int ans = -1 ;
    int s = 0;
    int e = size -1 ;
    int mid = s + ((e-s)/2);

    while(s < e ){

      if(arr[mid] == k){
       ans = mid ;
       s = mid + 1;
      }

      else if(arr[mid] > k ){
        e = mid -1 ;
      }
      else if(arr [mid ] < k){
        s = mid +1 ;
      }
   mid = s + ((e-s)/2);
    }
  return ans ;
}
    
    
    int main(){


    int arr[6] = { 1,2,3,3,3,4};
    int k = 3;
    print(arr, 6);
    cout << " \n we are finding the first and last occourence of kth element : " << k << endl;
    
      cout << " \n first occourence of the k is : " <<  leftoccourence(arr , 6 , k);
      
      cout << " \n last occourence of the k is : " <<  rightoccourence(arr , 6 , k);
 
    // total no. of k kitni baar array mein aya hein : 

     cout << " \n total nmumber of k in array are : " << (  rightoccourence(arr , 6 , k) -
         leftoccourence(arr , 6 , k) + 1);

    return 0 ;
}
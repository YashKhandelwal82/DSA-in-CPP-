#include<iostream>
using namespace std ;
 void print(int arr[] , int size ){
   for(int i = 0 ; i < size ; i++){
      cout << arr[i] << " "; 
   }
   cout << endl; 
 }
bool isFound(int arr[] , int size , int target){
     print(arr , size);
   // base case 
     if(size == 0){
        return false;
     }
     if(arr[0] == target){
        return true ;
     }
     else{
        bool remainingPart = isFound(arr+1 , size - 1 , target);
        return remainingPart;
     }
}

int main(){
    int arr[] = {2,4,6,11,132};
    int key = 11 ;
    int n = 5;

    int ans = isFound(arr,n,key);
    if(ans){
      cout << " present" << endl;
    }
    else{
        cout << "not present" << endl;
    }
return 0;
}
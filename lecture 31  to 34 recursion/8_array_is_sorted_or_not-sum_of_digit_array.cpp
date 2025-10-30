#include<iostream>
using namespace std ;
 bool isSorted(int arr[] , int size){
    // base case
    if(size == 0 || size == 1){
        return true ;
    }
  
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingpart = isSorted(arr + 1 , size - 1);
        return remainingpart ;
    }
 }
// sum of digit of array by recursion :->
 int SumOfArray(int arr[] , int n){
   // base case 
   if(n == 0){
    return 0;
   }
   if(n == 1){
    return arr[0];
   }
   else{
   
     int remainingPart =  SumOfArray(arr + 1 , n - 1);
     int sum = arr[0] + remainingPart;
    return sum ;
   }
 }


int main(){
    int arr[] = {2,4,6,11,132};

  int n = 5;
  
  
 {
  int ans =  isSorted(arr , n);
  if(ans)
   cout << "Array is sorted " << endl;
  else
   cout << "array is not sorted " << endl;
   
  }
  {
    int ans = SumOfArray(arr , n);
    cout << "sum of digit of array is :->" << ans << endl;
  }
  return 0;
}
#include<iostream>
using namespace std ;



int getsum(int *arr , int n  ){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum  += arr[i];
    }
    return sum ;
}
int main(){

   int n ;
   cout << " enter the size of array :->" << endl;

   cin >> n ;


   // variable size array :->
   int *arr = new int[n];   


   // taking input of array :->
   for(int i = 0 ; i < n; i++){
    cout << "enter the ith element of array : " << i << endl;
    cin >> arr[i];
   } 

   int ans = getsum(arr , n );

   cout << " sum of array element " << ans << endl;


   // after summ we have to make free the dynamic memory :->
   // by usnig  :-> delete keyword 

   delete []arr; // array deletion 

   //case 1 :->
   while(true){
    int i = 7 ;
   }
   cout << endl;

   // case 2 :->
   //shatani cheez 
   while(true){
    int  *i = new int ;
   }

    return 0 ;


}
#include<iostream>
using namespace std ;

//LEETCODE QUESTION 70:-> 

int CountDistinctWay(long long int n ){
   if( n < 0){
    return 0;
   }
   if(n == 0){
    return 1 ;
   }
   int ans = CountDistinctWay(n-1) + CountDistinctWay(n-2);

  return ans ;
}

int main(){
   /*we have n stires we have to climb it and we are at 0th stairs 
   we have to return the number of ways in which we can climb the staires from 0th to nth stairs */


   // condition:-> either u will take one step or 2 step at a time 
   long long int n ;
   cout << " enter the number of stairs " << endl;
   cin >> n ;

   int ans = CountDistinctWay(n);
   cout << " the ways in which we can climb" << n << "-th stairs is :-> " << ans << endl; 
    return 0;
}
#include<iostream>

using namespace std ;

int power (int a , int b){
      // base case 
      if(b == 0){
        return 1;
      }
      if(b == 1){
        return a;
      }

      int ans = power(a,b/2);

      // power is even :
      if(b % 2 == 0){
        return (ans * ans) ;
      }
      else{
        // power b is odd:
        return (a * ans * ans) ;
      }
}

int main (){
   
   int a, b ;
   cout<< "enter the value of a:->" << endl;
   cin >> a;
   cout << "Enter thge value of b :->" << endl;
   cin >> b;

   long long int ans = power(a , b);
   cout << " power of a^b is :-> " << ans << endl; 

 return 0;
}
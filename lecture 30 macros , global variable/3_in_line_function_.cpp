#include<iostream>
using namespace std ;

inline int getMax(int& a , int& b ){
    return (a > b) ? a : b;
}

void func(int& a , int& b){
    a++;
    b++;
    cout << a << " " << b ;
}

int main(){
    int a = 1 , b = 2 ;

    /*if(a > b){
    ans = a;
   }
   else{
    ans = b ;
   } */ // this comment can be written in single line with the help of tertiary operator 
    // syntax : condition ? (if block ) : ( else block )
  
   int ans = getMax(a,b);
    cout << ans << endl;

    a = a + 2;
    b = b + 1 ;
    
   

   ans = getMax(a , b);
   cout << ans << endl;
 
   // baar baar same chiz likhni pd rahi hain 
   // chalo man liya function bna liya toh baar baar function call karna padga :
   // now we use In Line function 

   // it is :-> if(body of function is of one line use In Line)

  

    return 0; 
}
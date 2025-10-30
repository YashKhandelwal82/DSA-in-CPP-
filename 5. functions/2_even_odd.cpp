#include<iostream>
using namespace std ;
bool evennum( int n){
  // odd
  if(n & 1){
        return false;
    }
    else {
    return true; // even 
}
}

int main (){
    int num ;
   cout << "enter a number "<< endl;
    cin >> num;
    if (evennum(num)){
        cout << " Number is Even  "<< endl;   
    }
    else {
        cout << " Number is Odd "<< endl;
    }
    return 0;
}
#include<iostream>
using namespace std ;

void reverse(string& str , int i ,int j){
    cout << "call recive for :->" << str << endl;
    // base case :->
    if(i>j){
        return ; 
    }

    swap(str[i] , str[j]);
    i++,j--;
    reverse(str,i , j); 
}

int main(){

  string str = "abcde";
  cout << "before reverse:-> " << str << endl;
  reverse(str , 0 , str.length() -1);
  cout << str << endl;
  
return 0;
}
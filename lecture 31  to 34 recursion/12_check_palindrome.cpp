#include<iostream>
using namespace std ;
bool checkpalindrome(string& s, int i , int j){
    // base case 
    if(i<j){
        return true;
    }
   if(s[i] != s[j]){
     return false;
    }
    else{
      i++,j--;
    return checkpalindrome(s,i,j);
    }
}

int main(){
  string str = "aabbaa";
  cout << "string is :->" << str << endl;
   bool ans = checkpalindrome(str,0,str.length()-1);
   if(ans){
     cout << "Yes string is palindrome " << endl;
    }
   else{
     cout << "No string is palindrome " << endl;
    } 
 
    return 0;
}
#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std ;

char getmaxcharacteredoccoured(string str ){
    
 // create unodered map to strore the character and its frequency
  unordered_map<char,int>mp;

// to store the ans 
 int ans ;
 int cnt = 0 ;
 int n = str.length();
 // treverse the string and push the character one by one in the mp and its frequency 


 for(int i = 0 ;  i < n ; i++){

   mp[str[i]]++; // pushing the charcter and counting it occurecmce 

   if(cnt < mp[str[i]]){
     ans = str[i];
     cnt = mp[str[i]];

   }

 return ans ;
 }
}



int main() {

  string str = " geeksyashkhandelwalyashyashyashyash";
  cout << " maximum charactered occured in the string is :->"<< endl;
  cout << str ;
  cout << endl;
  cout << getmaxcharacteredoccoured(str) << " " << endl;



    return 0 ;

}
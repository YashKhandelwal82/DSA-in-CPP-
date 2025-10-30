#include<iostream>
using namespace std;

string remove(string str ){
    int n = str.length();

    string temp = " ";
    int j = 0 ;

  // treverse the string :->
  // if 0th position character == (0+1)th position character are equal then direct jump 
  // otherwise temp string main push kro aur :->
   while(j < str.length()){
     for( int i = 0 ; i < n ; i++){
       if(str[i] == str[i+1] && i!=str.length()){
        i = i + 1;
       }
       else {
        temp.push_back(str[i]);
       }
      }
    j++;
   }
   
 return temp;
}

 int main (){

    string s;
   cout << "  Enter the string :-> " << endl;
   cin >> s;
    string  acx = remove(s);
   cout << " After removing all the adjacent pair of the string is :-> " << acx << endl;
  return 0 ;

 }
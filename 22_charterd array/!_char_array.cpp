#include<iostream>
using namespace std ;
// length of string :- > counts the charter simple 
 int  getlength(char arr[] ){
    int count = 0 ;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        count ++ ;
    }
  return count ;
 }
// reverse the string 
void reverse(char arr[] , int n ){
    char s = 0 ;
    char e = n- 1;
    while ( s < e ){
        swap(arr[s++] , arr[e--]);
    }
}
 
int main (){

char name [20];

cout << " enter the name :->" << endl;
    cin >> name ;
    // name[2] = ' \0';
cout << " your name is :->" << endl;
   cout << name << endl;
  int k =  getlength(name) ;
cout << " length of your string is : ->" << k << endl;

cout << " reverse the string is :->" << endl;
 reverse(name,k);
 cout << name << endl;
 
return 0 ;
}
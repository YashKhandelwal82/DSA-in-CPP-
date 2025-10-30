#include<iostream>
using namespace std ;
int  getlength(char arr[] ){
    int count = 0 ;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        count ++ ;
    }
  return count ;
 }
 // conversion uppercase character to lower case character 
 char tolowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch ;
    }
    else{
        char temp = ch - 'A' + 'a' ;
        return temp ;
    }
 }
// check weather is palindeome is not :->
 bool check(char arr[] , int n ){
     int s = 0 ; 
    int e = n - 1;
    while(s < e) {
        if( tolowerCase( arr[s] ) !=  tolowerCase (arr[e] ) ){
            return 0 ;
        }
        else{
            
            s++;
            e--;
        }
    }
 return 1 ;
}

int mainn(){
 
char string[10] ;
cout << " enter your name " << endl;
cin >> string ;

int k = getlength(string);
cout <<" string is palindrome yes or no is :->" << check(string , k ) << endl;
cout << " charter to lowercase " << tolowerCase('b') << endl;
cout << " charter to lowercase " << tolowerCase('C') << endl;
    return 0 ;
    
}
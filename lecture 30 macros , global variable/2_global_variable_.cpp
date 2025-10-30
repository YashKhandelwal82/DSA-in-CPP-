#include<iostream>
using namespace std ;
int score = 16;

 void a(int & i){
    cout << i << " ";
   // b(i);
 }

 void b(int& i){
    i++;
    cout << i << " " ;
 }

 int main(){

  cout << score << endl;
    int i = 10 ;
    a(i);
 }
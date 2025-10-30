#include<iostream>
using namespace std ;

int main (){
int n = 10 ;
int a= 0 ;
int b = 1 ;
cout << " "<< a <<endl ;
cout<<  " " << b ;
for(int i = 1 ; i <=10 ; i++){
    int nextnumber = a + b ;
    cout << nextnumber << " " << endl ;
     a = b ;
     b = nextnumber ;

}
}

#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout << " enter the vallue of n "<<endl;
    cin >> n ;

    cout << " printing count from 1 to n "<< endl ;

    for (int i = 0 ; i<= n ; i++ ){
        cout << i << endl;
    }
int i = 1;

    for ( ; ;  ){
        if (i <= n ){
            cout << i << endl ;
        }
        else{
            break;
        }
        i++;
    }
    

}
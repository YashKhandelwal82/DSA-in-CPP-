#include<iostream>
#include<array>
using namespace std ;

int main (){
// basic array 
int b[] = { 1 , 5, 6};

// stl array 

array <int, 4> a = {1,2,3,4 };

int size = a.size() ;

cout << " Print the siuze oif array :  " <<  size  << endl;

for(int i = 0 ; i < size ; i++) {
    cout << a[i] << " " << endl;
}



cout << " element at 2nd index of array " << a.at(2) << endl;
cout <<" Empty or not " << a.empty() << endl;

cout <<" first elemnt  " << a.front() << endl;
cout <<" last elemnt of array  " << a.back() << endl;

// time complaxity of all operation is o(1) ;
}



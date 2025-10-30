#include<iostream>
using namespace std ;


void printArray ( int arr[] , int size ){
    for (int i = 0 ; i < size ; i++)
    {
       cout << arr[i] << " " ;
    
    }
}

int main (){

int key ;
   int a[6] = { 1 , 2, 3, 4, 5, 6, };
   printArray(a , 6);

   cout << endl;

   cout << " Enter the total sum that u want to know :" << endl;
   cin >> key ;
   
   for ( int i = 0; i < 6 ; i++){      
        for(int j = i+1 ; j < 5 ; j++){      
             if(a[i] + a[j] == key ){
                cout << a[i] << " , " << a[j];
             }
        }
   }
 return 0 ;
}
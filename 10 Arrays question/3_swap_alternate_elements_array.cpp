#include<iostream>
using namespace std ;
void print(int arr[] , int size )
{
 for ( int i = 0 ; i < size ; i ++)
 {
    cout << arr[i] << "  " ;
 }
cout << endl ;
}

void swap_alternate(int arr[] , int size ){
   
   for (int i = 0 ; i < size ; i = i + 2  ){
    if(  (i + 1) < size  ){
        swap(arr[i] , arr[i+1]);
     }
   }
}

int main (){

int a[6] = {1, 2 ,3 ,4, 5 , 6};
int b[5] = { 5,4,3,2,1};



cout << " Array Without alternate the elements : " << endl ;
cout << endl;
     print( a , 6);
     print(b , 5);


    // swap the alternate elements of array 
    
     swap_alternate(a , 6);
     swap_alternate( b , 5);


cout << " Array after alternates element : "<< endl;
     print(a , 6);
     print(b , 5);

    return 0 ;
}



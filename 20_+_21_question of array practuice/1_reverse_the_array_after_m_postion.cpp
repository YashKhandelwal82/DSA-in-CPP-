#include<iostream>
using namespace std ;



void printarray(int arr[], int size ){
    for(int i = 0 ; i <size ; i++)
   {
cout <<" array is :-> " << arr[i] << endl;
   }
}

// reverse the array 

int reverse(int arr[] , int size ){
    int start = 0 ;
    int end = size -1 ;

    while(start < end ){
       swap(arr[start] , arr[end]);
       start = start +1 ;
       end = end - 1;
    }

}
int reverse_position(int arr[] , int size,  int m  ){
    int start = m + 1;
    int end = size -1 ;

    while(start <=  end ){
       swap(arr[start] , arr[end]);
       start = start +1 ;
       end = end - 1;
    }

}


int main() {

int arr[6] = {1,2,3,4,5,6};
cout <<" Befor reverseing the array "<< endl;
printarray(arr , 6);

 reverse(arr , 6);

cout << " ater reverseing the array "<< endl;
printarray(arr , 6);

cout << " Reverse The array at after the particular position " << endl;
cout << " enter the pooition " << endl;
int m ;
cin >> m ;

reverse_position(arr , 6 , m);
printarray(arr , 6);
}
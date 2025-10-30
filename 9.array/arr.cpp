#include<iostream>
using namespace std ;

void printArray(int arr[] , int size){

for(int i = 0; i < size ; i++)
{
    cout << arr[i] << " ";
}
cout << " printibng done " << endl;

}

int main() {
{
int arr[15] = {3,4,5};

cout <<" printing the array "<< endl ;

int n = 15 ;
printArray( arr , 15 );
}

// if we giving less number or value then its index value then in rest indexes it will declare zero itself 
// array ka size jyda h hum pr value km hain toh baki index value pr zero daldega 
 
  {
    int second[10] = { 2 , 5 };
     
     int n = 10;
     cout << " second array is :" << endl;
     printArray(second , 10);

  }
    return 0 ;
}
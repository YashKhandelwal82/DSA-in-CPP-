#include<iostream>
using namespace std ;
void printArray ( int arr[] , int size ){
    for (int i = 0 ; i < size ; i++)
    {
       cout << arr[i] << " " ;
    
    }
}

void sortzerosandones( int arr[] , int size ){
   int i = 0;
   int j = size -1 ;

   while(i <= j){
         
         while(arr[i] == 0 && i < j)
         {
            i++;
         }
         while (arr[j] == 1 && i < j){
            j--;
        }
         if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
   }


}

int mnain(){

    int a[7] = {0,1,0,1,0,1,0 };

    printArray( a , 7);
     cout << endl;

    sortzerosandones(a , 7);

    printArray(a , 7);
    return 0; 

}

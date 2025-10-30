#include<iostream>
using namespace std ;
void print(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int partition(int *arr , int start , int end ){
    int pivot = arr[start];
    int count = 0;
    // count number of element less than pivot element :->
    for(int i = start+1 ; i <= end ; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    // place pivot at right position 
    int pivotIndex = start + count ;
    swap(arr[start] , arr[pivotIndex]);

    // left part and right part smhalo:->
    // left part is always less than pivot element 
    // right part is always greater than that pivot element

    int i = start , j = end ;

    while(i > pivotIndex && j < pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]  > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }

 return pivotIndex;
}

void QuickSort(int *arr , int start , int end){
 
    // base case 
    if(start >= end){
        return ;
    }

    int p = partition(arr , start , end );

    // left part :->
    QuickSort(arr , start , p-1);

    // right part 
    QuickSort(arr , p+1 , end );
}

int main(){

    int arr[6] = {11,1,10,25,65,55};
    cout << "Array before sort is :->" << endl;
    print(arr , 6);

    QuickSort(arr,0,5);

    cout << " \n array after sorted by Quick sort :->" << endl;
    print(arr , 6);

  return 0;
}
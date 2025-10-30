#include<iostream>
using namespace std ;
void print(int *arr , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void merge(int *arr , int start , int end ){
    int mid = start + (end - start)/2;
    int length_1 = mid - start + 1 ;
    int length_2 = end - mid ;
    int *first = new int[length_1];
    int *second = new int[length_2];
   
    // int mainArrayIndex = start ;
    int k = start ;
    // copy first array :->
    for(int i = start ; i < length_1 ; i ++){
        first[i] = arr[k++];
    }
    
    // copy second array 
     k = mid + 1;
    for(int i = start ; i < length_2 ; i ++){
        second[i] = arr[k++];
    }

    // mearge two sorted array :->
    int index_1 = 0;
    int index_2 = 0;

    k = start;
    while(index_1 < length_1 && index_2 < length_2){
        if(first[index_1] < second[index_2]){
           arr[k++] = first[index_1++];
        }
        else{
          arr[k++] = second[index_2++];
        }
    }

    while(index_1 < length_1){
        arr[k++] = first[index_1++];
    }


    while(index_2 < length_2){
        arr[k++] = second[index_2++];
    }

   delete []first;
   delete []second;
}

void mergesort(int *arr , int start , int end){
    // base case 
    if(start >= end){
        return ;
    }

    int mid = start + (end - start)/2;
    // left part array ko sort karna 
    mergesort(arr, start , mid);

    // right part array ko sort karna :->
    mergesort(arr, mid+1 , end );

    // mearge both array :->
    merge(arr, start , end);
}

int main(){

    int arr[6] = {11,1,10,25,65,55};
    cout << "Array before sort is :->" << endl;
    print(arr , 6);

    mergesort(arr,0,5);

    cout << endl;
    cout << " \n array after sorted by mearge sort :->" << endl;
    print(arr , 6);

  return 0;
}
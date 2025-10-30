#include<iostream>
using namespace std ;


// function of finding the duplicate of key : 
 void duplicate( int arr[] , int size , int key){

   int count = 0;
   for(int i = 0; i < size ; i++){
     if(arr[i] == key ){
          count++;
      }   
    }
   cout << " array have the duplicacy of : " << key << "  :  " << count << "  times " << endl;
   
 }

void approch(int arr[] , int size ){
     for (int i = 0 ; i < size ; i++){
        if(arr[i] ^ arr[i] == 0){
            cout << " Duplicate elemenet will be :  " << arr[i] << " ";
        }
    }
}

int main (){
     int key ;
    //  cout<< " enter the element that u want to find the duplicate " << endl;
    //  cin >> key ;
    int arr[7] = { 1 , 2, 3, 5, 1,  6, 7};
    // duplicate(arr , 7 , key );
    cout << endl;
    approch(arr , 7);

    return 0 ;
}
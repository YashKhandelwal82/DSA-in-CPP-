#include<iostream>
using namespace std ;

bool search (int arr[] , int size , int key )
{
    for (int i = 0 ; i < size ; i++){
    
    if(arr[i] == key ){
      return 1 ;
    }
}
  return 0 ;
}



int main ()
{

// Program to do linear search operation in ARAAY 

int size ; 
int a[10]  ;
cout << "Enter the size of Array "<< endl ;
cin >> size;
int i , key ;


    for(i = 0 ; i < size ; i++){
        cout << " enter data for element " << i + 1 << " : "<<  endl;
        cin >> a[i] ;
    }

  cout << " enter the element that you want to search " << endl ;
  cin >> key ;
  
  bool found = search( a , size, key);
  if (found ){
    cout << " key is prensent "<< endl ;
   }
  else {
    cout << " key is absent "<< endl;
  }

   
 


return 0;

}

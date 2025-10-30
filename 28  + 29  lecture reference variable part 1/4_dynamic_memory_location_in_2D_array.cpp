#include<iostream>
using namespace std ;

// printing the array :-



int main (){


    int row ;
    cout << " enetr the number of rows :->" << endl;
    cin >> row;

    int col ;
    cout << "enter the number of columns :->" << endl;
    cin >> col;
    
   // creating a 2D array by the hel[p of dynamic memory allocation 
    int ** arr = new int*[row];

    for(int i = 0 ; i < row ; i++){
        arr[i] = new int[col];
    }// creationn done 

    // taking input 
    for(int i = 0 ; i < row ; i++){
        for(int j =0; j< col ;j++ ){
            cout << " enetr the arr[i][j]th element " << endl;
            cin >> arr[i][j];
        }
    }

    cout << endl;

    // printing the array :->
    for(int i = 0 ; i < row ; i++){
        for(int j =0; j < col ;j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory '
    for(int i = 0 ; i < row ; i++){
        delete []arr[i];
    }

    delete []arr;
    

    return 0 ;
}

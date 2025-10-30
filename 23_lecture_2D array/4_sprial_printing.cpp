#include<iostream>
using namespace std ;


// code to print a matrix in sprial manner :->
int mnain (){

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++){
          cout << arr[i][j] << " " ;
        }
        cout << endl;
      }
     int startingrow = 0 ;
     int startingcolumn = 0 ;
     int endingrow = 3-1;
     int endingcolumn = 3 -1 ;

      int total = 3*3;
      int count = 0 ;

      while(count<total){
        // printing starting row 
        for(int i = startingcolumn  ; count < total && i < endingcolumn ; i++)
        {
            cout << arr[startingrow][i] << " " << endl;
            count++;
        }
        startingrow++;
        
        // printing ending column :->
        for (int i = startingrow ; count < total && i < endingrow ; i++)
        {
            cout << arr[i][endingcolumn] << " " << endl;
            count++;
        }
        endingcolumn--;

        //printing ending row :->
        for(int i = endingcolumn ;  count < total && i > startingcolumn ; i-- )
        {
            cout << arr[endingrow][i] << " " << endl;
            count ++;
        }
        endingrow--;

        // printingstarting column :->
        for(int i = endingrow ; count < total && i > startingrow ;i--)
        {
            cout << arr[i][startingcolumn] << " " << endl;
            count++;
        }
        startingrow++;
      }


    return 0 ;
}
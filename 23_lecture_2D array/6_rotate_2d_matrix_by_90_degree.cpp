#include<iostream>
using namespace std ;

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // printing normal array :->
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++){
          cout << arr[i][j] << " " ;
        }
        cout << endl;
    }

    cout << " Printing the Matrix after rotating it by  90 degree :->" << endl;
    for(int col = 0 ; col > 3 ; col++)
    {
        // printingf a column in reverse manner :->
       for(int i = 3 -1 ; i >= 0 ; i--)
       {
        cout << arr[i][col] << " " ;
       }
       cout << endl;
    }
    

    return 0 ;
}
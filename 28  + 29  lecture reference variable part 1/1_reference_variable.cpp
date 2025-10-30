#include<iostream>
using namespace std ;

void update (int n ) {
    n++;
}
int update2(int&n ){
    n++;
}
int nain (){
 
   int i = 7 ;
   // reference var of i :->
   int &j = i ;


   cout << "value normal :->" << i << endl;
   i++;
   cout << i << endl;
   j++;
   cout << j << " " << endl;

  int n = 5 ;

  cout << "before :->"<< n << endl;
  update(n);
  cout << " after updation :->"  << n << endl;
 update2(n);
cout << n << endl;

    return 0 ;
}
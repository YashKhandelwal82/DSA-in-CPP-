#include<iostream>
#include<stack>
using namespace std ;
//This Code is use through STL
int main (){

// created of stack int type:
     stack<int> s ;

// Push Operation 
   s.push(2);
   s.push(3);

// Pop operation
   s.pop();

//Peak operation <
  cout << "Printing the Top Most Element of stack :-> "<< s.top() << endl;

//Check the stack is empoty or not

 if(s.empty()){
    cout << "stack is empty " << endl;
 }
 else{
    cout << " stack is not empty " << endl;
 }
 
// Size operation 
  cout << "Size of the stack is :-> " << s.size() << endl;


 return 0;
}
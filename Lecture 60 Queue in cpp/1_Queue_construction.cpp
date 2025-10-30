#include<iostream>
#include<queue>
using namespace std ;

int main(){
   queue<int> q;

   //Push Opeation 
    q.push(12);
    q.push(11);
    q.push(10);
    q.push(9);

  //size operation 
   cout << "size of the queue is :-> " << q.size() <<endl;

  //Pop elemenet 
   q.pop();

  //Printing The top most element of the queue by Front 
  cout << "THe top most element of queue is :-> " << q.front() << endl;

  //Checking the queue is empty or not :-> return : true or false 
  cout << "Checking The queue is empty or not :-> " << q.empty() << endl;

  //size operation 
  cout << "size of the queue is :-> " << q.size() <<endl;

  //printing the last element of queue is 
  cout << "The last element of the queue is :->" << q.back() <<endl;

  return 0;
}
#include<iostream>
#include<queue>
using namespace std ;

int main(){
  deque<int> d;

  d.push_front(12);
  d.push_back(14);

  cout << "view from front :-> " << d.front() << endl;
  cout << "view from back :-> " << d.back() << endl;

  d.pop_front();
  
  cout << "view from front :-> " << d.front() << endl;
  cout << "view from back :-> " << d.back() << endl;

  d.pop_back();

  if(d.empty()){
    cout << "queue is empty " << endl;
  }
  else{
    cout << " queue is not empty" << endl;
  }
  
  


 return 0;
}
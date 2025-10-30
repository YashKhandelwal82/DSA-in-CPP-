#include<iostream>
using namespace std ;

class Queue{
   public: 
    //Data Members:->
    int*arr;
    int size;
    int front = 0;
    int rear = 0;

    //Constructor 
    Queue(int size){
      this->size = size;
      arr = new int[size];
      front = -1;
      rear = -1 ;
    }

    void push(int element){
       //Check weather Queue is full or not:->
       if(rear == size){
        cout << "Queue is full" << endl;
       }
       else{
        arr[rear] = element;
        rear++;
       }
    }

    int pop(){
        //Check First weather queue is empty of not
        if(front == rear){
            return -1;
        }
        else{
          return arr[front];
          front++;
          if(front == rear){
            front = rear = 0;
          }
        }
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
          return false;
        }
    }

    int top(){
        if(front == rear){
            return -1;
        }
        else{
          return arr[front];
        }
    }
 
    
};

int main(){

   Queue q(5);
  //Push Opeation 
    q.push(12);
    q.push(11);
    q.push(10);
    q.push(9);

   if(q.isEmpty()){
     cout << " queue is empty " << endl;
   } 
   else{
    cout << "Queue is Not empty " << endl;
   }

   cout << "pop elememnt :->" << q.pop() << endl;

 return 0;
}
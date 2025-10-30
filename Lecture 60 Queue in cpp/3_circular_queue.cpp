#include<iostream>
using namespace std ;

class CircularQueue {
   public:
    int* arr;
    int front;
    int rear;
    int size;

    CircularQueue(int size){
      this->size = size;
      arr = new int[size];
      front = rear = -1;
    }

    //Enqueue operation 
    void push(int element){
        if(front == 0 && rear == size){
            cout << "Queue is full " <<endl;
        }
        else if(front == -1){//first element to be push
            front = rear = 0;
        }
        else if(rear == size && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = element;
    }

    int pop(){
        if(front == -1 && rear == -1){//to check queue is empty
            cout << "Queue is empty" <<endl;
            return -1 ;
        }
        int ans = arr[front];
        if(front == rear){
            //single element is present
            front = rear = -1;
        }
        else if(front == size - 1){//pop karte karte front last size element pr agya 
            front = 0;//To maintain cyclic nature 
        }
        else{
           front++;
        }
     return ans ;
    }




};

int main(){
    CircularQueue q(5);

    q.push(12);
    q.push(11);
    q.push(10);
    q.push(9);
    q.push(12);


    cout << "pop element is :->" << q.pop() <<endl;
    q.push(10);





  return 0;
}
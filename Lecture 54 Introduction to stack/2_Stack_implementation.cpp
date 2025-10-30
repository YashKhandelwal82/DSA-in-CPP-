#include<iostream>
using namespace std;

//Stack implentation through Array
class Stack{
 //Properties:
 public:
  int top;
  int *arr;
  int size; 

//behaviour:
 // Constructor 
 Stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
 }

 void push(int element){
   // Check the avivableity of space 
   if(size - top > 1){
     top++;
     arr[top] = element;
   }
   else{
     cout << "Stack overflow" << endl;
   }
 }

 void pop(){
   // Check atleat one element is present or not
   if(top >= 0){
     top--;
   }
   else{
     cout << "Stack Underflow" << endl;
   }
 }

 int peak(){
    if(top >= 0){
        return arr[top];
    }
    else{
        cout << " Stack is empty" << endl;
    }
 }

 bool isEmpty(){
    if(top == -1){
        return true ;
    }
    else{
        return false;
    }
 }

};

int main(){
  Stack st(5);
    
  // Push some element
    st.push(55);
    st.push(46);
    st.push(44);
    st.push(55);
    st.push(46);
    st.push(44);

  //Top most element
   cout << "Top Most elemnet of the stack is :-> " << st.peak() << endl;
 
 //Pop out some element 
    st.pop();

 //Top most element
    cout << "Top Most elemnet of the stack is :-> " << st.peak() << endl;
 
 // check empty or not 
  if(st.isEmpty()){
   cout << "stack is empty" << endl;
  }
  else{
    cout << "Stack is not empty" << endl;
  }
  
 return 0;
}
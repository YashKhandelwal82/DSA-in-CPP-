#include<iostream>
using namespace std ;


class Node{
   
    public:
     int data ;
     Node* next;

      // constructor
      Node(int data)
      {
        this -> data = data ;
        this -> next = NULL;
      }

      ~Node(){
        int value = this -> data ;
        // memory free
        if(this -> next != NULL){
            delete next ;
            this -> next = NULL;
        }
       cout << " Memory is free for node with data is :- " << value << endl;
      }
       
};
void print(Node * & tail ){
    Node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }
    while(tail -> next != temp);
    cout << endl;
}

// get length of the linked list 
int getlength(Node * &tail){
    int len = 0;
    Node* temp = tail ;
    do{
        len++;
        temp = temp -> next;
    }while(tail -> next != temp);
    return len ;
}

void insertNode(Node *& tail , int element , int data ){
      
      //assumming that the element is present in the lsst
      // empty circular linked list :->
      if(tail == NULL){
        Node *newnode = new Node(data);
        tail = newnode ;
        newnode -> next = newnode;
      }
      else{
        // non empty list :->
        Node* curr = tail ;

        while(curr -> data != element){
            curr = curr -> next;
        }
        // element is found and curr is pointing to that curr element node
         Node * newnode = new Node(data);
         newnode -> next = curr -> next;
         curr -> next = newnode;
      }
}

//DELETATION IN CIRCULAR LINKED LIST 

void deleteNode(Node* tail , int value){
  if(tail == NULL){
    cout << "Circular linked list is allready empty " << endl;
    return;
  }
  else{
    Node* prev = tail;
    Node* curr = prev -> next;

    while(curr -> data != value ){
        prev = curr ;
        curr = curr -> next;
    }
    prev -> next = curr -> next;
    if(tail == curr){
        tail = prev;
    }
    curr -> next = NULL;
    delete curr ;
  }
}

int  main(){
  
    // we use tail pointer in circular linked list  
    // node isnerted after the given data 

    
    Node * tail = NULL;

    // case 1 -> inserting the node in empty list 
    insertNode(tail , 5 , 3);
    print(tail);
  //  cout << "length of the linked list " << getlength(tail) << endl;

  /*  insertNode(tail , 3 , 5);
    print(tail);

    insertNode(tail , 5 , 7);
    insertNode(tail , 7 , 8);
    print(tail);

    insertNode(tail , 3 , 10);
    print(tail);  
 */

    deleteNode(tail , 5);
    print(tail);



 return 0;
}
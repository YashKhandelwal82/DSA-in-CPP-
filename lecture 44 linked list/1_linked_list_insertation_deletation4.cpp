#include<iostream>
using namespace std;

class Node{
   public:
     int data ;
     Node * next;
    
     Node(int data){ // constructure
        this -> data = data;
        this -> next = NULL ;
     }

     // distructor
     ~Node(){
      int value = this -> data ;
      // memory free 
      if(this -> next != NULL){
        delete next ;
        this -> next = NULL;
      }
      cout << "memeory is free for node with data  " << value << endl;
     }
};
// print the linked lkist 
void print(Node*  &head ){// treverse a linked list
    Node* temp = head ;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next ;
    }
    cout << endl;
}

// insert node at beginning 
void InsertAtBegin(Node*& head , int data){
    // data aya new node bnao phele 
    Node* temp = new Node(data);

    temp -> next = head;
    head = temp;
}

// insert node at the end :->
void InsertAtEnd(Node* &tail , int data ){
    // create a node 
     Node *temp = new Node(data);
     tail -> next = temp;
     tail = temp; 
}

// imnsert at given position :->
void InsertAtSpecificPosition(Node*& head , Node* & tail, int data , int pos){
    // create a node 
    if(pos == 1){
        InsertAtBegin(head , data);
        return;
    }
    Node *temp = new Node(data);
    Node* previousnode = head ;
    int count = 1;
      while(count < pos - 1){
        previousnode = previousnode -> next;
        count++;
      }

      // inshort given pos is the last position then
      // update the tail also
      if(previousnode -> next == NULL){
        InsertAtEnd(tail , data);
      }
      temp -> next = previousnode -> next;
      previousnode -> next = temp;
}


// DELETATION  OF NODE IN A LINKED LIST 

void deleteAtBegin(Node * &head ){
  if(head == NULL){
    cout << "Linked List is Empty" << endl;
    return;
  }
  Node*temp = head ;
  int element = temp-> data;
  cout << "data is :->" << element << endl;
  head = temp -> next;
  temp -> next = NULL;
  delete temp;
}

// deletion at the last 
void DeleteAtEnd(Node* &tail , Node* &head){
  Node* temp , *prevnode ;
  temp = prevnode = head;
  while(temp -> next != NULL){
    prevnode = temp;
    temp = temp-> next;
  }
  int element = temp-> data;
  if(temp == head){
    head = 0;
   delete temp;
  }
  else{
    tail = prevnode;
    tail -> next = 0;
  delete temp;
  }
  cout << "deleted element is :->" << element << endl;
}

void DeleteAtSpecificPosition(Node* &head , Node* &tail , int pos){
  // postion is the starting position :->
  if(pos == 1){
    deleteAtBegin(head);
    return;
  }

  /* position in mid or in any position
  or last node also */
  Node* previousnode , *currentnode ;
  previousnode = NULL;
  currentnode = head;
  int count = 1;
    while(count < pos ){
      previousnode = currentnode;
      currentnode = currentnode -> next;
        count++;
    }
    previousnode -> next = currentnode -> next;
    currentnode -> next = NULL;
    delete currentnode;
    
}
 

 
int main(){

    // create a node 
   Node* node1 = new Node(10);
  // cout << node1 -> data << endl;
   // cout << node1 -> next << endl;

   Node* head = node1;
   Node* tail = node1;

   

   InsertAtBegin(head , 15);
   print(head);

   InsertAtBegin(head ,20);
   print(head);

   InsertAtSpecificPosition(head ,tail , 12 , 2);
   print(head);

   InsertAtSpecificPosition(head ,tail , 12 , 4);
   print(head);
    
   InsertAtEnd(tail , 40);
   print(head);
    
   deleteAtBegin(head);
   print(head);

   DeleteAtSpecificPosition(head , tail , 4);
   print(head);
  return 0;
}

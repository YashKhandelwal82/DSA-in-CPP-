#include<iostream>
using namespace std ;

class Node{
  
   public:
    int data ;
    Node * prev;
    Node * next;

    // constructor
    Node(int data){
        this -> data = data ;
        this -> next = NULL;
        this -> prev = NULL;
    }

    // distructure
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

// treverse the linked list
void print(Node * &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// get length of the linked list 
int getlength(Node * &head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
       len++;
       temp = temp -> next;
    }
    return len ;
}

// INSERTATION IN DOUBBLY LINKED LIST 
// insert at begin
void InsertAtBegin(Node* &head , int data){
    if(head == NULL){
        cout << " this is the first node also " << endl;
        Node * temp = new Node(data);
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        head -> prev = temp;
        temp -> next = head;
        head = temp;
    }
}

void InsertAtEnd(Node *& tail, int data ){

    if(tail == NULL){
        Node * newnode = new Node(data);
        tail = newnode;
    }
    else{
         // create a new node 
     Node* newnode = new Node(data);

     tail -> next = newnode;
     newnode -> prev = tail ;
     tail = newnode;
    }
}

void InsertatSpecificPosition(Node * & head , Node *& tail , int pos , int data){
    // insert at start
    if(pos == 1){
        InsertAtBegin(head, data);
        return ;
    }

    int cnt = 1 ;

    Node* temp = head;
    while(cnt < pos){
        temp = temp -> next;
        cnt++;
    }

    // temp treverse krte krte last m poch gaya 
    if(temp -> next = NULL){
        InsertAtEnd(tail , data);
        return ;
    }
    
    Node *newnode = new Node(data);
    newnode -> prev = temp;
    newnode -> next = temp -> next;
    temp -> next -> prev = newnode ;
    temp -> next = newnode ; 
}

// DELETATION IN DOUBBLY LINKED LIST :>

void Deletion(int pos , Node * &head ){
    if(head == NULL){
        cout << "list is empty" << endl;
    }
    // deletion from beginning:->
    if(pos == 1){
      Node* temp = head ;
     temp -> next -> prev = NULL;
     head = temp -> next;
     temp -> next = NULL;
     delete temp;
    }

    // node middle main hoga ab ya last main hoga 
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt < pos){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr ;
}

int main(){

   // Node* node1 = new Node(35);
    Node* head = NULL;
    Node * tail = NULL;

    print(head);
   // cout << node1 -> prev << endl;
     // cout << node1 -> next << endl;
    cout << " length of the linked link list is :-> " << getlength(head) << endl;

    InsertAtBegin(head , 30);
    print(head);
    cout<< "head :->" << head -> data << endl;
    cout<< "tail :->" << tail -> data << endl;

    InsertAtBegin(head , 11);
    print(head);
    cout<< "head :->" << head -> data << endl;
    cout<< "tail :->" << tail -> data << endl;

    print(head);
    Deletion(1 , head);
    print(head);

    InsertAtBegin(head , 9);
    print(head);
    cout << " length of the linked link list is :-> " << getlength(head) << endl;
    cout<< "head :->" << head -> data << endl;
    cout<< "tail :->" << tail -> data << endl;
   
    InsertAtEnd(tail , 40);
    print(head);
    cout << " length of the linked link list is :-> " << getlength(head) << endl;
    cout<< "head :->" << head -> data << endl;
    cout<< "tail :->" << tail -> data << endl;

    InsertatSpecificPosition(head , tail , 4 , 50);
    print(head);
    cout << " length of the linked link list is :-> " << getlength(head) << endl;
    cout<< "head :->" << head -> data << endl;
    cout<< "tail :->" << tail -> data << endl;

    

  return 0;
}
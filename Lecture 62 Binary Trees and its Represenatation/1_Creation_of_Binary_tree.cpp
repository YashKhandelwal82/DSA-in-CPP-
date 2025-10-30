#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std ;

class Node{
  public: 
    int data;
    Node* left;
    Node* right;

    //constructor
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
   cout<<"Enter data:-"<<endl;
   int data ;
   cin>>data;
     
   root = new Node(data);

   if(data == -1){ 
      return NULL;
   }
   

   //Recursive call for left sub tree 
   cout<<"Enter data for inserting in left"<<data<<endl;
   root->left = buildTree(root->left);

   //Recursive call for right sub tree 
   cout<<"Enter data for inserting in right"<<data<<endl;
   root->right = buildTree(root->right);

   return root;
};


void levelOrderTreversal(Node* root){
    //Queue will help to BFS And Level Order Treversal
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }else{
             cout<<temp->data<<" ";
             if(temp->left)  q.push(temp->left);
             if(temp->right) q.push(temp->right);
        }    
    }
}

void inOrder(Node* root){
    if( root == NULL)  return;

    //Left RootNode Right 
    inOrder(root->left);
    cout<<root->data<<endl;
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root == NULL) return ;

    //Root_Node - then left Sub tree - then Right Sub Tree
    cout<<root->data<<endl;
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;

    //Left Right Node
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<endl;
}


Node* buildTreeByLevelOrder(Node*& root){
    queue<Node*> q;
    cout<<"Enter the data for the root"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<< "Enter The left node data of node: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<< "Enter the Right node data of node: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}


int main(){

    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //creating  a tree
    root = buildTree(root);
   
    //print tree
    cout<<"printing the level order treversal of tree"<<endl;
    levelOrderTreversal(root);

    cout<<"Inorder treversal of Binary tree"<<endl;
    inOrder(root);

    cout<<"PreOrder treversal of Binary tree"<<endl;
    preOrder(root);

    cout<<"PostOrder treversal of Binary tree"<<endl;
    postOrder(root);



 return 0;
}
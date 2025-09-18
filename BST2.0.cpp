#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
    
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node *Insertion( Node*root, int arr[], int i, int n){
    if(i < n){
        Node*temp = new Node(arr[i]);
        root = temp;
        root->left = Insertion(root->left, arr, 2*i+1, n);
        root->right = Insertion(root->right, arr, 2*i+2, n);
    }
    return root;
}
  
  
  void inorderTraversal(Node*root){
      if(root){
          inorderTraversal(root->left);
          cout<<root->data<<" ";
          inorderTraversal(root->right);
      }
  }
//*************************************************************************************
  Node*rightMin(Node*root){
      while(root && root->data){
          root=root->left;
      }
      return root;
  }
  //------------------------------------------------------------------------------------
  Node*deleteNode(Node*root,int val){
      if(root==nullptr){
          return root;
      }else if(val<root->data){
          root->left=deleteNode(root->left,val);
      }else if(val>root->data){
          root->right=deleteNode(root->right,val);
      }else{
          if(root->left==nullptr && root->right==nullptr){
              delete root;
              return nullptr;
          }else if(root->right==nullptr){
              Node*temp=root->left;
              delete root;
              return temp;
          }else if(root->left==nullptr){
              Node*temp=root->right;
              delete root;
              return temp;
          }else{
              Node*temp=rightMin(root->right);
              root->data=temp;
              root->right=delete(root->right,temp->data);
          }
      }
  }
  
  
int main() {
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    
    int *arr = new int[n];
    
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    Node*root = nullptr;
    for(int i=0; i<n; i++) {
        root = Insertion(root, arr, 0, n);
        
        cout << "Inorder Traversal : "<<endl;
    inorderTraversal(root);

    }
    return 0;
}

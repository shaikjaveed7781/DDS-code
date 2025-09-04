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

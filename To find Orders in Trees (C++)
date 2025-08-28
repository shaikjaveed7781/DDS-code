#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*Right;
    Node(int val){
        data=val;
        left=nullptr;
        Right=nullptr;
    }
};

    void inorder(Node*root){
        if(root){
            cout<<root->data<<" ";
            inorder(root->left);
            inorder(root->Right);
        }
    }
void preorder(Node*root){
    if(root){
        preorder(root->left);
        cout<<root->data<<" ";
        preorder(root->Right);
    }
}
void postorder(Node*root){
    if(root){
        postorder(root->left);
        postorder(root->Right);
        cout<<root->data<<" ";
    }
}
int main(){
    Node*root=new Node(2);
    root->left=new Node(3);
    root->Right=new Node(4);
        root->left->left=new Node(5);
    root->left->Right=new Node(6);
    root->Right->left=new Node(7);
    root->Right->Right=new Node(8);
    cout<<"Inorder ;";inorder(root);
    cout<<endl;
    cout<<"Preorder:";preorder(root);
    cout<<endl;
    cout<<"Postorder:";postorder(root);
    
}

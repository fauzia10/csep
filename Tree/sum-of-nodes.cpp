#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};
Node* insert(Node* root,int key){
    if(root==nullptr){
        return new Node(key);
    }
    if(key<root->data){
        root->left=insert(root->left,key);
    }
    else{
        root->right=insert(root->right,key);
    }
    return root;
}
int sumofnodes(Node* root){
    if (root==nullptr){
        return 0;
    }
    return (root->data+sumofnodes(root->left)+sumofnodes(root->right));
}
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=nullptr;
    int n;
    int count=0;
    cout<<"Enter num of nodes:";
    cin>>n;
    cout<<"Enter values:";
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root=insert(root,value);
    }
    cout<<"Inorder: ";
    inorder(root);
    cout << "\nSum of leaf nodes: " << sumofnodes(root);
    return 0;
}
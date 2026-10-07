#include<iostream>
#include <climits>
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
int minele(Node* root){
    if(root==nullptr){
        return INT_MAX;
    }
    int leftmin=minele(root->left);
    int rightmin=minele(root->right);
    return min(root->data,min(leftmin,rightmin));    

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
    cout<<"Enter num of nodes:";
    cin>>n;
    cout<<"Enter values:";
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        root=insert(root,value);
    }
    cout<<"inorder";
    inorder(root);
    cout<<endl;
    cout<<"\n min element:"<<minele(root);
    return 0;
}
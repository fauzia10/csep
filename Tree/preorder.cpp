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
void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* firstNode= new Node(2);
    Node* secNode= new Node(3);
    Node* fourNode= new Node(4);
    firstNode->left=secNode;
    firstNode->right=fourNode;
    cout<<"PREODER"<<endl;
    preorder(firstNode);
    return 0;
}
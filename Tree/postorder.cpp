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
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* firstNode= new Node(2);
    Node* secNode= new Node(3);
    Node* fourNode= new Node(4);
    firstNode->left=secNode;
    firstNode->right=fourNode;
    cout<<endl<<"POSTODER"<<endl;
    postorder(firstNode);
    return 0;
}
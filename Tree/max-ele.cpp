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
int maxele(Node* root){
    if(root==nullptr){
        return 0;
    }
    int leftm=maxele(root->left);
    int rightm=maxele(root->right);
    return max(root->data,max(leftm,rightm));    

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
    cout<<"\n max element:"<<maxele(root);
    return 0;
}
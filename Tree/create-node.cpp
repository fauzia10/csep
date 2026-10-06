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
int main(){
    Node* firstNode= new Node(2);
    Node* secNode= new Node(3);
    Node* fourNode= new Node(4);
    firstNode->left=secNode;
    firstNode->right=fourNode;
    return 0;
}
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n,value;
    cout<<"Enter number of node:";
    cin>>n;
    Node* first=NULL;
    Node* last=NULL;
    for(int i=0;i<n;i++){
        cout<<"Enter value:";
        cin>>value;
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(first==NULL){
            first=newNode;
            last=newNode;
        }
        else{
            last->next=newNode;
            last=newNode;
        }
    }
    Node* fast=first;
    Node* slow=first;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
    return 0; 
}
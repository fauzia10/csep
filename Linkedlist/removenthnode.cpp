#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n,nth,value;
    cout<<"Enter no.of node:";
    cin>>n;
    Node* first=NULL;
    Node* last=NULL;
    for(int i=0;i<n;i++){
        cout<<"Enter the value:";
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
    cout<<"Enter the nth node you want to delete:";
    cin>>nth;
    Node* dummy=first;
    Node* slow=dummy;
    Node* fast=dummy;
    for(int i=0;i<nth;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
    while(dummy!=NULL){
        cout<<dummy->data<<" ";
        dummy=dummy->next;
    }
    return 0;
}
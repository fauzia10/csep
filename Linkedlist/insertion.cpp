#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n,value;
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
    int ele;
    cout<<"Enter element to insert:";
    cin>>ele;
    Node* newNode=new Node;
    newNode->data=ele;
    newNode->next=first;
    first=newNode;
    cout << "Linked list after insertion: ";
    Node* temp = first;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
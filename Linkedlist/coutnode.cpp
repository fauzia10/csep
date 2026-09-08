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
    int count=0;
    Node* temp=first;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        count++;
        temp=temp->next;
    }
    cout<<"the length of node is:"<<count;
    return 0;

}

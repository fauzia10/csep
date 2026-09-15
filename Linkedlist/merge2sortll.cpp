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
    cout<<"first linklist";
    for(int i=0;i<n;i++){
        cout<<"Enter the value:";
        cin>>value;
        Node* l1=new Node;
        l1->data=value;
        l1->next=NULL;
        if(first==NULL){
            first=l1;
            last=l1;
        }
        else{
            last->next=l1;
            last=l1;
        }
    }
    cout<<"second linklist";
    for(int i=0;i<n;i++){
        cout<<"Enter the value:";
        cin>>value;
        Node* l2=new Node;
        l2->data=value;
        l2->next=NULL;
        if(first==NULL){
            first=l2;
            last=l2;
        }
        else{
            last->next=l2;
            last=l2;
        }
    }
    
}
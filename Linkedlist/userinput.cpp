#include<iostream>
// #include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main(){
    int n,value,c=0;
    cout<<"Enter the number of node";
    cin>>n;
    Node* first=NULL; 
    for(int i=0;i<n;i++){
        cout<<"enter values:";
        cin>>value;
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
    }
    Node* temp=first;
    while(temp!=NULL){
        cout<<temp->data;
        c++;
        temp=temp->next;
    }
    temp=first;
    cout<<"mid value"<<endl;
    for(int i=0;i<c/2;i++){
        temp=temp->next;
    }
    cout<<temp->data;
    return 0;

}

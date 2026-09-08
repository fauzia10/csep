#include<iostream>
// #include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main(){
    int c=0;
    Node* first=new Node;
    Node* sec=new Node;
    Node* third=new Node;
    first->data=10;
    sec->data=20;
    third->data=30;
    first->next=sec;
    sec->next=third;
    third->next=NULL;
    Node* temp=first;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        c++;
        temp=temp->next;
    }
    temp = first;
    for(int i = 0; i < c/2; i++) {
        cout<<"mid value"<<endl;
        temp = temp->next;
    }
    cout << temp->data;
    return 0;

}

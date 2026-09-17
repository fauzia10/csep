#include<iostream>
using namespace std;
int arr[100];
int top=-1;
void push(int value){
    if(top==99){
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    arr[top]=value;
}
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return;
    }
    top--;
}
void peek(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }
    cout<<"top element:"<<arr[top]<<endl;
}
void display(){
    if(top==-1){
        cout<<"stack is empty";
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    push(10);
    push(20);
    push(30);
    cout<<"stack:";
    display();
    peek();
    pop();
    pop();
    cout<<"ater pop";
    display();
    return 0;
}

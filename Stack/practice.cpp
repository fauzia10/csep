#include<iostream>
#include<stack>
using namespace std;
class myStack{
    int *arr;
    int capacity;
    int top;
    public:
    myStack(int cap){
        capacity=cap;
        arr=new int[capacity];
        top=-1;
    }
    void push(int x){
        if(top==capacity-1){
            cout<<"stack overflow";
            return;
        }
        arr[++top]=x;
    }
    int pop(){
        if(top==-1){
            cout<<"stack underflow";
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        return (top==-1);
    }
    bool isfull(){
        return (top==capacity-1);
    }
};

int main(){
    myStack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    
    // popping one element
    cout << "Popped: " << s.pop() << "\n";

    // checking top element
    cout << "Top element: " << s.peek() << "\n";

    // checking if stack is empty
    cout << "Is stack empty: " << (s.isempty() ? "Yes" : "No") << "\n";

    // checking if stack is full
    cout << "Is stack full: " << (s.isfull() ? "Yes" : "No") << "\n";

    return 0;
} 

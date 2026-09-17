#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int value){
    if(st.empty()){
        st.push(value);
        return;
    }
    int top=st.top();
    st.pop;
    insertatbottom(st,value);
    st.push(top);
}
void reversestack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top=st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st,top);
}

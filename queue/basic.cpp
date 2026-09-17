#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    cout<<"front element:"<<q.front()<<endl;
    cout<<"back element:"<<q.back()<<endl;
    q.pop();
    cout<<"front element after pop"<<q.front()<<endl;
    //cout<<"back element after pop"<<q.pop()<<endl;
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<"size of queue:"<<q.size()<<endl;
    q.pop();
    cout<<"after pop size"<<q.size()<<endl;
}
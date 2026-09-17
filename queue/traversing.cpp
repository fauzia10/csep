#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    queue<int> temp(q);
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    return 0;
}
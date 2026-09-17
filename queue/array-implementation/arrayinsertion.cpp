#include<iostream>
using namespace std;
class myQueue{
    int* arr;
    int capacity;
    int size;
public:
    myQueue(int c){
        capacity=c;
        arr=new int[capacity];
        size=0;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    bool isFull()
    {
        return size == capacity;
    }
    void enqueue(int x){
        if(isFull()){
            cout<<"overflow"<<endl;
            return;
        }
        arr[size++]=x;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"underflow";
            return;
        }
        for(int i=1;i<size;i++){
            arr[i-1]=arr[i];
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[0];
    }
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[size - 1];
    }

};
int main() {
    myQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    // Get the front element.
    cout << q.getFront() << endl;

    // Remove the front element.
    q.dequeue();

    // Get the new front element.
    cout << q.getFront() << endl;

    // Get the rear element.
    cout << q.getRear() << endl;

    // Try to insert another element.
    q.enqueue(40);

    return 0;
}
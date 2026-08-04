#include<iostream>
using namespace std;
int main(){
    int a[100],size;
    cout<<"Enter number of element:";
    cin>>size;
    for(int i=0;i<size;i++) {
        cin>>a[i];
    }
    int maxnum=a[0];
    for(int i=0;i<size;i++) {
        if(a[i]>maxnum){
            maxnum=a[i];
        }
    }
    cout << maxnum;
}
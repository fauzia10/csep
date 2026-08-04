#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int key,temp;
    cin>>key;
    int k=key%5;
    for(int i=0;i<k;i++){
        temp=a[4];
        for(int j=4;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
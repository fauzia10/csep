#include<iostream>
using namespace std;
int main() {
    int a[100],n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxnum=a[0],secnum;
    for(int i=0;i<n;i++){
        if(a[i]>maxnum){
            secnum=maxnum;
            maxnum=a[i];
        }
        else if (a[i]>secnum && a[i]!=secnum){
            secnum=a[i];
        }
    }
    cout<<maxnum<<" "<<secnum;
}
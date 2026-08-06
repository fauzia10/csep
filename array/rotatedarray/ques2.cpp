#include<iostream>
using namespace std;
int main(){
    int n,k,c;
    cin>>n;
    cout<<"Enter k";
    cin>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    c=k%n;
    for(int i=0;i<n;i++){
        b[(i+c)%n]=a[i];

    }
     for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;

}
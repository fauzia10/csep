#include<iostream>
using namespace std;
int main(){
    int n,tsum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        tsum+=a[i];
    }
    int lsum=0,rsum=0;
    for(int i=0;i<n;i++){
        rsum=tsum-lsum-a[i];
        if(lsum==rsum){
            cout<<i;
            return 0;
        }
        lsum+=a[i];
    }
    cout<<-1;
    return 0;
}
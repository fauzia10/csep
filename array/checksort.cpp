#include<iostream>
using namespace std;

int main(){
    int a[100],size,issort=0;
    cout<<"Enter size of element:";
    cin>>size;
    cout<<"Enter elements:";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<size;i++){
        if(a[i]>a[i+1]){
            issort=1;
            break;
        }
        
    }
    if(issort==1){
        cout<<"not sorted";
    }
    else{
        cout<<"Sorted";
    }

}
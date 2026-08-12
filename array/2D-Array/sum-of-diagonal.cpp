#include<iostream>
using namespace std;
int main(){
    int m,n,d1=0,d2=0;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of column";
    cin>>n;
    int a[m][n];
    cout<<"Enter the value of the array:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (i==j){
                d1+=a[i][j];
            }
            
        }
        d2+=a[i][n-i-1];
    }
    cout<<d1<<" "<<d2<<endl;
    if(d1>d2){
        cout<<d1<<"is greater";
    }
    return 0;
}
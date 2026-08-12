#include<iostream>
using namespace std;
int main(){
    int m,n,r1=0;
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
            r1+=a[i][j];
        }
        cout<<r1<<"  ";
        r1=0;
    }
    return 0;
}
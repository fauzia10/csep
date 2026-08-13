#include<iostream>
using namespace std;
int main(){
    int m,n,ele;
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
    cout<<"Enter the value of element:";
    cin>>ele;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (a[i][j]==ele){
                cout<<"Found at"<<i<<j;
            }
        }
    }
    return 0;
}
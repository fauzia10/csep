#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of column";
    cin>>n;
    int a[m][n],b[n][m];
    cout<<"Enter the value of the array:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=a[j][i];

            cout<<b[i][j];
        }
        cout<<endl;
    }
    int temp;
    for(int j=0;j<n;j++){
        temp=b[j][0];
        b[j][0]=b[j][n-1];
        b[j][n-1]=temp;

    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }

    return 0;
}
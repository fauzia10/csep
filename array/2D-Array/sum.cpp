#include<iostream>
using namespace std;
int main(){
    int m,n,sum=0;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of column";
    cin>>n;
    int a[m][n];
    cout<<"Enter the value of the array:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    cout<<sum;
    return 0;
}
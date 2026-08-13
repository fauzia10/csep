#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of column";
    cin>>n;
    int old[m][n],neww[m][n];
    cout<<"Enter the value of the array:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>old[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            neww[j][n-1-i]=old[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<neww[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
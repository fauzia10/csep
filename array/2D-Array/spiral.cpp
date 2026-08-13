#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of column: ";
    cin>>n;
    int matrix[m][n];
    cout<<"Enter the value of an array:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int top=0,bottom=m-1,left=0,right=n-1;
    while(left<=right&&top<=right){
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<< " ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
    }
    return 0;
    
}
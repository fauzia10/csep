#include<iostream>
#include<vector>
using namespace std;
void spiralarray(vector<vector<int>>& matrix,int m,int n){
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
}
int main(){
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    spiralarray(matrix, m, n);
    return 0;
}
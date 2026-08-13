#include<iostream>
#include<vector>
using namespace std;
void rotatee(vector<vector<int>>& old,vector<vector<int>>& neww,int m,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            neww[j][m-1-i]=old[i][j];
        }
    }
}
int main(){
    int m,n;
    cout<<"Enter the number of rows:";
    cin>>m;
    cout<<"Enter the number of column:";
    cin>>n;
    vector<vector<int>>old(m,vector<int>(n));
    vector<vector<int>>neww(n,vector<int>(m));
    cout<<"Enter the elements in an array:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cin>>old[i][j];
        }
    }
    rotatee(old,neww,m,n);
    cout<<"rotated array:\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<neww[i][j]<<" ";
        }
        cout<<"\n";
    }
}
#include <iostream>
#include <vector>
using namespace std;
void transpose(vector<vector<int>>& a, vector<vector<int>>& b, int m, int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector<vector<int>> a(m, vector<int>(n));
    vector<vector<int>> b(n, vector<int>(m));
    cout << "Enter the elements:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    transpose(a, b, m, n);
    cout << "Transpose of the matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
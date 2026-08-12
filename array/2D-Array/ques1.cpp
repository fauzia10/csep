#include <iostream>
using namespace std;

void arrayOutput(int m, int n, int* a) {
    cout << "array is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << *(a + (i * n) + j) << " "; 
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;
    int* a = new int[m * n];
    cout << "Enter values:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> *(a + (i * n) + j);
        }
    }
    arrayOutput(m, n, a);
    delete[] a; 
    return 0;
}
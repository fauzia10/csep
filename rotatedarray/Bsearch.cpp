#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == value) {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(a[mid] > value) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "Not found";
}
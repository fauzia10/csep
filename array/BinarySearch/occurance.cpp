#include<iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;
    int low = 0, high = n - 1;
    int first = -1, last = -1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            first = mid;
            high = mid - 1; 
        }
        else if(a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    low = 0;
    high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] == key) {
            last = mid;
            low = mid + 1;  
        }
        else if(a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(first == -1) {
        cout << "Element not found.";
    }
    else {
        cout << "First Occurrence = " << first << endl;
        cout << "Last Occurrence = " << last;
    }

    return 0;
}
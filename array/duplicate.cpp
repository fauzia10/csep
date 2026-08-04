#include <iostream>
using namespace std;

int main() {
    int arr[100], copy[100];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        copy[i] = arr[i];
    }

    int found = 0;

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        int alreadyPrinted = 0;

        // Check if element has already appeared
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted == 1)
            continue;

        // Check for duplicates
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = 1;
                break;
            }
        }
    }

    if (found == 0)
        cout << "No duplicate elements.";

    cout << "\nCopied array: ";
    for (int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}
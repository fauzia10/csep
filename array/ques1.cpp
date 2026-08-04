#include <iostream>
using namespace std;

int main() {
    int oddpro = 1, esum = 0, arr[100];
    int n;

    cin >> n;

    cout << "Enter the elements in array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (i % 2 == 0) {
            esum += arr[i];
        }
        else {
            oddpro *= arr[i];
        }
    }

    cout << "Sum of even index elements = " << esum << endl;
    cout << "Product of odd index elements = " << oddpro << endl;

    return 0;
}
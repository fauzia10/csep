#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, pos;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> pos;

    // Shift elements to the left
    for(int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrease size
    n--;

    cout << "Updated Array:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

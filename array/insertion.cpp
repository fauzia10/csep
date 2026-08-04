#include<iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, element;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter element: ";
    cin >> element;

    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = element;

    // Increase size
    n++;

    cout << "Updated Array:\n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
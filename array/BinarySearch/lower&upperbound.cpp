#include<iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter key: ";
    cin >> key;

    int low = 0, high = n - 1;
    int ans = n;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(a[mid] >= key) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(ans == n)
        cout << "Lower Bound does not exist";
    else
        cout << "Lower Bound Index = " << ans<<endl;
    low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]>key){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    if(ans == n)
        cout << "upper Bound does not exist";
    else
        cout << "upper Bound Index = " << ans;
    return 0;
}
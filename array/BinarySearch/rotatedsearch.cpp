#include<iostream>
using namespace std;
int main(){
    int n,k,c,target;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter the elements:";
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the time u want to rotate";
    cin>>k;
    c=k%n;
    for(int i=0;i<n;i++){
        b[(i+c)%n]=a[i];

    }
     for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"Enter the target:";
    cin>>target;
    int low=0,high=n-1,search=-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(b[mid] == target){
            search = mid;
            break;
        }
        if(b[low] <= b[mid]){
            if(target >= b[low] && target < b[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(target > b[mid] && target <= b[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    if(search==-1){
        cout<<-1;
    }
    else{
        cout<<"found"<<" "<<search;
    }
    return 0;
}
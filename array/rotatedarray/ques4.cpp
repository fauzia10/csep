#include<iostream>
using namespace std;
int main(){
    int n,key,temp;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter the key:";
    cin>>key;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=key%n;
    for(int i=0;i<k;i++){
        temp=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    int c=0;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            c=c+1;
        }
    }
    if(a[n - 1] > a[0]){
        c++;
    }
    if(c == 1)
    cout << "\nArray is sorted and rotated.";
    else if(c == 0)
    cout << "\nArray is already sorted.";
    else
    cout << "\nArray is not sorted and rotated.";
    return 0;
}
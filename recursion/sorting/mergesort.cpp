#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int> &arr,int low,int mid,int high){
    int i=low,j=mid+1;
    vector<int> arrm;
    while(i<mid && j<=high){
        if(arr[i]<arr[j]){
            arrm.push_back(arr[i++]);
        }
        else{
            arrm.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        arrm.push_back(arr[i++]);
    }
    while(j<=high){
        arrm.push_back(arr[j++]);
    }
    for (int k = low; k <= high; k++) {
        arr[k] = arrm[k - low];
    }
}
void mergesort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=low+(high-low)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr={2,3,4,5,6,1};
    int low=0,high=arr.size()-1;
    mergesort(arr,low,high);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
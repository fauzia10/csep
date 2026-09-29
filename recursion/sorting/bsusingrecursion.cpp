#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> &arr,int l,int h,int target){
    if(l>h){
        return -1;
    }
    int mid=l+(h-l)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return bs(arr,l,mid-1,target);
    }
    return bs(arr,mid+1,h,target);

}
int main(){
    vector<int> arr={1,2,6,7};
    int target=2;
    int l=0,h=arr.size()-1;
    int result=bs(arr,l,h,target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result <<endl;
    } else {
        cout << "Element " << target << " not found in the array." <<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;
int arrayprint(vector<int>&a){
    int n=a.size();
    if(n<0){
        return;
    }
    arrayprint(n-)
    if(n==0){
        return 0;
    }  
    else if(n==1){
        return 1;
    }
    else{
        return(fib(n-1)+fib(n-2));   
    }
}
int main(){
    vector<int> a;
    int n;
    cout<<"Size";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    arrayprint(a);
}
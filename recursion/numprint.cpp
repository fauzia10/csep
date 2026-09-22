#include<iostream>
using namespace std;
void numprint(int n){
    if(n==0){
        return;
    }
    numprint(n-1);
    cout<<n;
    
}
int main(){
    int n;
    cin>>n;
    numprint(n);
}
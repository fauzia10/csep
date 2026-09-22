#include<iostream>
using namespace std;
void numprint(int n){
    if(n==0){
        return;
    }
    cout<<n;
    numprint(n-1);
    
}
int main(){
    int n;
    cin>>n;
    numprint(n);
}
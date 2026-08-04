#include<iostream>
using namespace std;
int main(){
    int num,rem,ans=0;
    cout <<"enter num";
    cin>>num;
    while(num>0) {
        rem=num%10;
        ans=ans+rem*rem;
        num=num/10;
        
        if(ans==1){
            break;
        }
        num=ans;
    }
    cout <<ans;
}
#include<iostream>
using namespace std;
int countnum(int num) {
    int r,count=0;
    while(num>0) {
        r=num%10;
        count++;
        num=num/10;
    }
    return count;
}
int powernum(int num,int power) {
    int ans=1;
    for(int i=0;i<power;i++) {
        ans*=num;
    }
    return ans;
}
int main() {
    int num,rem,power,finalans=0,temp;
    cout << "enter num:";
    cin >> num;
    temp=num;
    power=countnum(num);
    while(num>0) {
        rem=num%10;
        finalans=finalans+powernum(rem,power);
        num=num/10;

    }
    cout << finalans;
    if (temp == finalans) {
        cout<<"yes armstrong";
    }
    else {
        cout <<"no";
    }
    
}
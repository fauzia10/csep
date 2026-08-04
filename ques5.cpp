#include<iostream>
using namespace std;
int main() {
    int num,sum=0,temp,rem;
    cout << "Enter number:";
    cin >> num;
    temp=num;
    while (num>0) {
        int fac=1;
        rem=num%10;
        for(int i=1;i<=rem;i++) {
            fac*=i;
        }
        sum+=fac;
        num=num/10;
    }
    if (temp == sum) {
        cout << "yes it is a strong num";
    }
    else {
        cout <<"no it is not";
    }
    return 0;
}
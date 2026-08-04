#include<iostream>
using namespace std;
int main() {
    int num,rem,nsum=0,multi=1;
    cout << "Enter number:";
    cin >> num;
    while (num>0) {
        rem=num%10;
        nsum=nsum+rem;
        multi*=rem;
        num=num/10;
    }
    cout << nsum<<endl;
    cout << multi;
    if (nsum==multi) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int num,rem,d=0,temp,count=0,cub,c;
    cout << "Enter number:";
    cin >> num;
    temp=num;
    while(num>0) {
        rem=num%10;
        count++;
        num=num/10;
    }
    cub=count;
    while (num>0) {
        rem=num%10;
        for(int i=0;i<cub;i++) {
            c=rem*i;
        }
        d=d+c;
        num=num/10;
    }
    if (temp == d) {
        cout << "armstrong";
    }
    else {
        cout << " not";
    }
}

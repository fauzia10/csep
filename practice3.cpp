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
int squarenum (int num,int power) {
    int ans=1;
    for(int i=1;i<=power;i++) {
        ans*=num;
    }
    return ans;
}
int main() {
    int num,rem,power,finalans=0;;
    cout << "Enter num:";
    cin >> num;
    power=countnum(num);
    while (num>0){
        while(num>0) {
            rem=num%10;
            finalans=finalans+squarenum(rem,power);
            num=num/10;
        }
        if(finalans==1){
            break;
        }
        num=finalans;

    }
    cout << finalans;

}
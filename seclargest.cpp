#include<iostream>
using namespace std;
int main() {
    int num,rem,larnum=1,seclargest=-1;
    cout << "Enter numbers;" ;
    cin >> num;
    while (num>0) {
        rem=num%10;
        if(larnum<num) {
            seclargest=larnum;
            larnum=rem;
        }
        else if (rem > seclargest && rem != larnum) {
            seclargest = rem;
        }
        num=num/10;
    }
    cout << seclargest;
}
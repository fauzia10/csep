#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter num";
    cin >> num;
    int rem = num % 10;
    int smallest = rem;
    int largest = rem;

    num /= 10;

    while (num > 0) {
        rem = num % 10;

        if (rem > largest) {
            largest = rem;
        }
        else if (rem < smallest) {
            smallest = rem;
        }
            num /= 10;
    }
    cout << smallest ;
    return 0;
}
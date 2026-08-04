#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int num, rem, lnum = 0;

    cout << "Enter number: ";
    cin >> num;

    num = abs(num);   // Convert negative to positive

    while (num > 0) {
        rem = num % 10;

        if (lnum < rem) {
            lnum = rem;
        }

        num = num / 10;
    }

    cout << "Largest digit = " << lnum;

    return 0;
}
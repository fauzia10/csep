#include <iostream>
using namespace std;

int main() {
    int num, temp, rem;

    cout << "Enter number: ";
    cin >> num;

    for (int i = 0; i <= 9; i++) {
        int count = 0;
        temp = num;

        while (temp > 0) {
            rem = temp % 10;

            if (rem == i) {
                count++;
            }

            temp = temp / 10;
        }

        if (count > 0) {
            cout << i << " occurs " << count << " times\n";
        }
    }

    return 0;
}
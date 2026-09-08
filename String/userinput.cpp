// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the string:";
//     getline(cin,s);
//     cout<<s<<endl;
//     int n=s.size();
//     cout<<n;
// }
#include <iostream>
using namespace std;

int main() {
    char a[6]; 
    
    cout << "Enter the string (5 characters): ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    a[5] = '\0';
    cout << "The complete string is: " << a << endl;
    
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter string\n";
    getline(cin,s);
    cout<<s[0];
    cout<<s[s.size()-1];
}
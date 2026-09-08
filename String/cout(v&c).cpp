#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string:";
    getline(cin,s);
    int n=s.size();
    int cv=0,cc=0;
    for(int i=0;i<n;i++){
        if (s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o' ||s[i]=='u'){
            cv++;
        }
        else{
            cc++;
        }
    }
    cout<<cv<<endl<<cc;

}
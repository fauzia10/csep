#include<iostream>
#include<vector>
using namespace std;
int solve(string s,int index,string current,int target){
    if(current.length()==target){
        cout<<current<<endl;
        return 1;
    }
    if(index == s.length()) {
        return 0;
    }
    current.push_back(s[index]);
    int take=solve(s,index+1,current,target);
    current.pop_back();
    int dtake=solve(s,index+1,current,target);
    return take+dtake;
}
int main(){
    string s="abc";
    string current="";
    int target=2;
    cout<<solve(s,0,current,target);
}
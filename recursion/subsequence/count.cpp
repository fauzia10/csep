#include<iostream>
#include<vector>
using namespace std;
int solve(string s,int index,string current){
    if(index==s.length()){
        return 1;
    }
    current.push_back(s[index]);
    int take=solve(s,index+1,current);
    current.pop_back();
    int dtake=solve(s,index+1,current);
    return take+dtake;
}
int main(){
    string s="abc";
    string current="";
    cout<<solve(s,0,current);
}
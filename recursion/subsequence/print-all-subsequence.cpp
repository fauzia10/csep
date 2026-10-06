#include<iostream>
#include<vector>
using namespace std;
void solve(string s,int index,string current){
    if(index==s.length()){
        cout<<current<<endl;
        return;
    }
    current.push_back(s[index]);
    solve(s,index+1,current);
    current.pop_back();
    solve(s,index+1,current);
    return;
}
int main(){
    string s="abc";
    string current="";
    solve(s,0,current);
}
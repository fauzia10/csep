#include<iostream>
#include<vector>
using namespace std;
void solve(string s,int index,string current,int target){
    if(index==s.length()){
        if(current.length()==target){
            cout<<current<<endl;
        }
        return;
    }
    current.push_back(s[index]);
    solve(s,index+1,current,target);
    current.pop_back();
    solve(s,index+1,current,target);
}
int main(){
    string s="abc";
    string current="";
    int target=2;
    solve(s,0,current,target);
}
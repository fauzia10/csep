#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void solve(vector<int>& nums,int index,vector<int>& current,vector<vector<int>>& ans){
    if(index==nums.size()){
        ans.push_back(current);
        return;
    }https://www.flipkart.com/sadhusadhya-high-gloss-varnish-acrylic-painting-wood-art-100-ml/p/itmbc44f1beab6e8?pid=APVHGT6TEYREZMH5&lid=LSTAPVHGT6TEYREZMH5GKSLY1&marketplace=FLIPKART&cmpid=content_art-paint-varnish_23231663444_g_8965229628_gmc_pla&tgi=sem,1,G,11214002,g,search,,782643135339,,,,c,,,,,,,&entryMethod=23231663444&&cmpid=content_23231663444_gmc_pla&gad_source=1&gad_campaignid=23231663444&gbraid=0AAAAADxRY58DpXmazLKmYq7qVySUlPnFk&gclid=Cj0KCQjw8ofWBhCHARIsANBj4LsJM0GWx6qkMHmip0-6Oxp0ROXxG-oxu4gkDePx9I8IKoyP3l5xh_AaAt9lEALw_wcB
    current.push_back(nums[index]);
    solve(nums,index+1,current,ans);
    current.pop_back();
    solve(nums,index+1,current,ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        solve(nums,0,current,ans);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
int main(){
    vector<int> nums = {1, 2, 2};

    Solution obj;

    vector<vector<int>> result = obj.subsetsWithDup(nums);

    for(auto subset : result) {
        cout << "[ ";

        for(int x : subset) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }
}
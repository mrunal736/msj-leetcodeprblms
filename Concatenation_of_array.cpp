class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i =0;i<2;i++){
            for(int j=0;j<n;j++){
               ans.insert(ans.end(),nums[j]);
        }
        }
     return ans;
    }
};

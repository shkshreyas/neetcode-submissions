class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> f;
        for(int i=0;i<n;i++){
            if(f.find(nums[i])!=f.end()){
                return true;
            }
            f.insert(nums[i]);
        }
        return false;
    }
};
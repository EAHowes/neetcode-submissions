class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        std::unordered_map<int,int> fmp;
        for (int i = 0; i < nums.size(); i++) {
            fmp[nums[i]]++;

            if (fmp[nums[i]] > 1) {
                if (nums[0] != 1) {
                    return {nums[i], nums[i-1] - 1};
                }
                return {nums[i], nums[i-1] + 1};
            }
        
        }
    }
};
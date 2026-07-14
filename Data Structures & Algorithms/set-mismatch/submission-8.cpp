class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        std::unordered_map<int,int> fmp;
        int dub;
        for (int i = 0; i < nums.size(); i++) {
            fmp[nums[i]]++;
            if (fmp[nums[i]] > 1) {
                dub = nums[i];
                break;
            }
        }

        for (int i = 1; i < nums.size() + 1; i++) {
            if (fmp.count(i) == 0) {
                return {dub, i};
            }
        }
    }
};
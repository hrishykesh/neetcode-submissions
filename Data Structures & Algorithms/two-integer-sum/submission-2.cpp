class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> k;
        for(int i=0;i<nums.size();i++)
        {   
            if(k.count(nums[i]))
            {
                return {k[nums[i]],i};
            }
            k[(target-nums[i])]=i;

        }
        return{};
        
    }
};

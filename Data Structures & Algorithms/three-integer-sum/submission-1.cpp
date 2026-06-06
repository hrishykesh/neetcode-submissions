class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set  <vector <int>> set_;
        vector<vector <int>> res;
        int mid=1;
        int n=nums.size();
        int high=n-1;
        sort(nums.begin(),nums.end());
        for(int low=0;low<n;low++)
        {   
            mid=low+1;
            high=n-1;
            while(mid<high)
            {
                if(nums[mid]+nums[high]+nums[low]==0 && !set_.count({nums[low],nums[mid],nums[high]}))
                {
                    res.push_back({nums[low],nums[mid],nums[high]});
                    set_.insert({nums[low],nums[mid],nums[high]});
                    mid++;
                    high--;
                }
                else if(nums[mid]+nums[high]+nums[low]<0)
                    mid++;
                else if(nums[mid]+nums[high]+nums[low]>=0)
                    high--;
            }
        }
    return res;
    }

};

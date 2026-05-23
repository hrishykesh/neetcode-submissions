class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> res;
        unordered_map<int,int> mp;
        for(int num: nums)
        {
            mp[num]++;
        }
        for (auto &x:mp)
        {
            res.push_back(x);
        }
        sort(res.begin(),res.end(),[](auto& a, auto& b){
            return a.second>b.second ;
        });
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(res[i].first);
        }
        return result;

    }
};

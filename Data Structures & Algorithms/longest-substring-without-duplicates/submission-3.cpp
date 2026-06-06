class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=1;
        unordered_set<char> set_;
        set_.insert(s[0]);
        int len=0;
        if(s.size()==1)
            return 1;
        while(r< s.size())
        {
            if(!set_.count(s[r]))
            {
                set_.insert(s[r]);
                
                r++;
                len = max(len , r-l);

            }
            else
            {
                while(set_.count(s[r]) && l<r){
                    set_.erase(s[l]);
                    l++;
                }

                len = max(len , r-l);
            }
        }
        return len;
        
    }
};

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int m= s1.size();
        if (m > n) return false;
        vector<int> count(26,0);
        vector<int> zeroe(26,0);

        for(int i=0;i<m;i++)
            count[s1[i]-'a']++;
        vector<int> count2 = count;
        int l=0;
        for(int r=m-1; r<n;r++)
        {   
            count2=count;
            int temp=l;
            while(temp<=r)
            {
                count2[s2[temp]-'a']--;
                temp++;
            }
            if(count2==zeroe)
                return true;
            l++;

        }
        return false;

    }
};
